# Finish archiving the original repositories

The exercises, original histories, and migration pointers have been published and verified. GitHub denied the integration permission to change repository archive settings (`Resource not accessible by integration`, HTTP 403). The original repositories therefore remain active until their owner archives them.

Archiving makes an original repository read-only and preserves its URL and history. It does not delete the repository or make its contents private. New work belongs in this consolidated collection.

## Using the GitHub website

For each original listed in [the migration map](../MIGRATION.md):

1. Open its original repository link and select **Settings**.
2. In **General**, scroll to **Danger Zone**.
3. Choose **Archive this repository** and complete GitHub's confirmation.

Keep `programming-foundations` active. The archive operation applies only to the 23 originals listed in `sources.json`.

## Optional bulk method with GitHub CLI

On your own machine, with Python 3 and GitHub CLI installed and authenticated to an account with repository administration access, clone this collection and enter its directory. If GitHub CLI is not already authenticated, use its normal `gh auth login` flow on that machine; do not put a token in a script or send credentials in chat.

First run the read-only checks:

```bash
python3 migration/archive-originals.py
```

The script checks all 23 sources, the preserved history tags, the migration-pointer commit tips, and visibility/default-branch assumptions before making any changes. It stops if source work has advanced since migration. A successful dry run confirms these prerequisites, not permission to perform the archive operation.

After reviewing that output, archive the verified originals:

```bash
python3 migration/archive-originals.py --apply
```

The script only requests `archived=true`; it does not delete repositories or change visibility. If it stops after a partial result, the already-archived repositories are recognized on the next run. A GitHub permission error still requires an account/integration with the appropriate administration access.

[Back to migration notes](../MIGRATION.md).
