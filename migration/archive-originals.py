#!/usr/bin/env python3
"""Check the exact migration sources; archive them only with --apply.

Requires Python 3 and GitHub CLI authenticated with repository administration
access. No credentials are read or stored by this script.
"""

import argparse
import concurrent.futures
import json
from pathlib import Path
import subprocess
from urllib.parse import quote


def api(route, *, archive=False):
    command = ["gh", "api", route]
    if archive:
        command += ["--method", "PATCH", "-F", "archived=true"]
    result = subprocess.run(command, capture_output=True, text=True, check=False)
    if result.returncode:
        raise RuntimeError(result.stderr.strip() or "GitHub request failed")
    return json.loads(result.stdout)


def check_source(source, imported_tips):
    name = source["repository"]
    if not name.startswith("nix-daemon/") or name.count("/") != 1:
        raise RuntimeError("Unexpected source owner or repository name")
    if imported_tips.get("refs/tags/" + source["history_tag"]) != source["source_commit"]:
        raise RuntimeError(name + ": preserved history tag does not match")
    metadata = api("repos/" + name)
    if metadata["private"] or metadata["fork"]:
        raise RuntimeError(name + ": source visibility or fork status changed")
    expected_branch = source["source_ref"].removeprefix("refs/heads/")
    if metadata["default_branch"] != expected_branch:
        raise RuntimeError(name + ": default branch changed")
    branch = api("repos/" + name + "/branches/" + quote(expected_branch, safe=""))
    if branch["commit"]["sha"] != source["archive_expected_tip"]:
        raise RuntimeError(name + ": newer source work requires review before archiving")
    return source, metadata["archived"]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--apply", action="store_true", help="Archive verified originals; default is read-only")
    args = parser.parse_args()
    manifest = json.loads(Path(__file__).with_name("sources.json").read_text())
    sources = manifest["sources"]
    if len(sources) != 23 or len({s["repository"] for s in sources}) != 23:
        raise RuntimeError("Expected the exact 23-repository migration list")
    target = api("repos/nix-daemon/programming-foundations")
    if target["private"] or target["archived"]:
        raise RuntimeError("The consolidated destination must remain public and active")
    tags = api("repos/nix-daemon/programming-foundations/git/matching-refs/tags/legacy/")
    imported_tips = {tag["ref"]: tag["object"]["sha"] for tag in tags}
    with concurrent.futures.ThreadPoolExecutor(max_workers=4) as pool:
        checked = list(pool.map(lambda source: check_source(source, imported_tips), sources))
    for source, archived in checked:
        print(("ALREADY ARCHIVED " if archived else "READY ") + source["repository"], flush=True)
    if not args.apply:
        print("Read-only checks passed. No repository settings changed. Use --apply only when ready.")
        return
    for source, archived in checked:
        if archived:
            continue
        # Check again immediately before the administrative change.
        _, archived = check_source(source, imported_tips)
        if archived:
            continue
        response = api("repos/" + source["repository"], archive=True)
        if response.get("archived") is not True:
            raise RuntimeError(source["repository"] + ": archive result was not confirmed")
        print("ARCHIVED " + source["repository"], flush=True)


if __name__ == "__main__":
    try:
        main()
    except (OSError, ValueError, KeyError, RuntimeError) as error:
        raise SystemExit(str(error)) from error
