# Migration and history preservation

The 23 C++ exercise repositories were imported into `cpp/<original-repository-name>/`. Each original source history is a parent of an import merge, so its original commit objects, authorship and timestamps are retained without rewriting or squashing them.

All 53 distinct commits reachable from the inspected source refs are retained in the consolidated `main` history. Each `legacy/<original-name>` tag points to the original tip at import time. [sources.json](migration/sources.json) records the mapping, source refs, original commit IDs and file hashes.

## Following older history

Paths in the old repositories were at their repository root. Imported commits keep those original paths; the merge places the final tree under the new prefix. For example:

```bash
git log legacy/Fibonacci -- fibonacci.cpp
git show legacy/Fibonacci:fibonacci.cpp
git log -- cpp/Fibonacci/fibonacci.cpp
```

The first commands inspect the original history. The last follows work at the new path after import. An individual directory's GitHub history view may not automatically display all pre-migration root-path commits; use the source tag or original repository for that history.

## What changed

Source files, tracked executables and editor configuration were copied without content changes. Exercise README wording now refers to running commands from the exercise directory and links back to the collection. The collection README, ignore rules and migration records are new navigation material.

Original repositories remain available to preserve their existing URLs. Migration pointers and archiving are applied after the consolidated repository has been published and verified. New exercise work belongs in this collection.

The consolidated files, histories, and migration pointers have now been published and verified. Archiving the originals was denied to the integration by GitHub (HTTP 403), so it remains an owner action. [Archive instructions and an optional checked bulk script](migration/ARCHIVE.md) provide that final step.

## Source mapping

| Original repository | Source tip | New directory | History anchor |
|---|---|---|---|
| [Absolute-Value](https://github.com/nix-daemon/Absolute-Value) | [`82fe9804da91`](https://github.com/nix-daemon/Absolute-Value/commit/82fe9804da91aeb356dfc13e65a634ee6a92ee65) | [cpp/Absolute-Value](cpp/Absolute-Value/) | `legacy/Absolute-Value` |
| [Adding-Numbers](https://github.com/nix-daemon/Adding-Numbers) | [`f4af18ef3d5f`](https://github.com/nix-daemon/Adding-Numbers/commit/f4af18ef3d5fdb58b1ad303bf4908954e570bc47) | [cpp/Adding-Numbers](cpp/Adding-Numbers/) | `legacy/Adding-Numbers` |
| [AreaOfACircle](https://github.com/nix-daemon/AreaOfACircle) | [`727e0a6d286e`](https://github.com/nix-daemon/AreaOfACircle/commit/727e0a6d286e3ff20d51164c1fd458afb381bf16) | [cpp/AreaOfACircle](cpp/AreaOfACircle/) | `legacy/AreaOfACircle` |
| [BMI-Imperial](https://github.com/nix-daemon/BMI-Imperial) | [`6b8665249044`](https://github.com/nix-daemon/BMI-Imperial/commit/6b8665249044c346dedaf3e1366a94eaaa3de723) | [cpp/BMI-Imperial](cpp/BMI-Imperial/) | `legacy/BMI-Imperial` |
| [BMI-Metric](https://github.com/nix-daemon/BMI-Metric) | [`0687e68b8dc4`](https://github.com/nix-daemon/BMI-Metric/commit/0687e68b8dc41a138d88506a65421ff15f813270) | [cpp/BMI-Metric](cpp/BMI-Metric/) | `legacy/BMI-Metric` |
| [Classifying-a-Character](https://github.com/nix-daemon/Classifying-a-Character) | [`746b3cdaa129`](https://github.com/nix-daemon/Classifying-a-Character/commit/746b3cdaa12928c637c27ae59f33b16c7c39f8a5) | [cpp/Classifying-a-Character](cpp/Classifying-a-Character/) | `legacy/Classifying-a-Character` |
| [Coin-Converter](https://github.com/nix-daemon/Coin-Converter) | [`97f88fea0224`](https://github.com/nix-daemon/Coin-Converter/commit/97f88fea022498f51c1cbe9162593e0dcd27ec8a) | [cpp/Coin-Converter](cpp/Coin-Converter/) | `legacy/Coin-Converter` |
| [Coin-Counter](https://github.com/nix-daemon/Coin-Counter) | [`35fb191fddfc`](https://github.com/nix-daemon/Coin-Counter/commit/35fb191fddfc60232d7188b0f7c223f0e1b3739b) | [cpp/Coin-Counter](cpp/Coin-Counter/) | `legacy/Coin-Counter` |
| [Compute-Expression-Value](https://github.com/nix-daemon/Compute-Expression-Value) | [`b3e19d5776f6`](https://github.com/nix-daemon/Compute-Expression-Value/commit/b3e19d5776f672fea4c311496c4bbeadf90030cd) | [cpp/Compute-Expression-Value](cpp/Compute-Expression-Value/) | `legacy/Compute-Expression-Value` |
| [Computing-Average](https://github.com/nix-daemon/Computing-Average) | [`82f096ef3567`](https://github.com/nix-daemon/Computing-Average/commit/82f096ef3567bda56415248d144e0af46df5ed94) | [cpp/Computing-Average](cpp/Computing-Average/) | `legacy/Computing-Average` |
| [Convert-12--hour-to-24-hour](https://github.com/nix-daemon/Convert-12--hour-to-24-hour) | [`80c0a818b555`](https://github.com/nix-daemon/Convert-12--hour-to-24-hour/commit/80c0a818b55597670e97e5e0119cdf00fcdeb587) | [cpp/Convert-12--hour-to-24-hour](cpp/Convert-12--hour-to-24-hour/) | `legacy/Convert-12--hour-to-24-hour` |
| [Counting-Even-and-Odd-Numbers](https://github.com/nix-daemon/Counting-Even-and-Odd-Numbers) | [`5a0e9d9d8274`](https://github.com/nix-daemon/Counting-Even-and-Odd-Numbers/commit/5a0e9d9d8274868629cfa8989358a0156f51a82f) | [cpp/Counting-Even-and-Odd-Numbers](cpp/Counting-Even-and-Odd-Numbers/) | `legacy/Counting-Even-and-Odd-Numbers` |
| [Counting-and-Summing-Digits](https://github.com/nix-daemon/Counting-and-Summing-Digits) | [`32ee2ff29adb`](https://github.com/nix-daemon/Counting-and-Summing-Digits/commit/32ee2ff29adb6b35de2e6ef26e3139227c4f6e3d) | [cpp/Counting-and-Summing-Digits](cpp/Counting-and-Summing-Digits/) | `legacy/Counting-and-Summing-Digits` |
| [Determine-Parity](https://github.com/nix-daemon/Determine-Parity) | [`a8ac12ce80b3`](https://github.com/nix-daemon/Determine-Parity/commit/a8ac12ce80b38fd797fbb9848f3586e8b8b95ce9) | [cpp/Determine-Parity](cpp/Determine-Parity/) | `legacy/Determine-Parity` |
| [Even-Numbers](https://github.com/nix-daemon/Even-Numbers) | [`fe0fa56bb5ad`](https://github.com/nix-daemon/Even-Numbers/commit/fe0fa56bb5ad52fe215843570127308f0c57d90d) | [cpp/Even-Numbers](cpp/Even-Numbers/) | `legacy/Even-Numbers` |
| [Fibonacci](https://github.com/nix-daemon/Fibonacci) | [`6ba932ae65d2`](https://github.com/nix-daemon/Fibonacci/commit/6ba932ae65d2e9b50ac41b237eaa172e29d02b3f) | [cpp/Fibonacci](cpp/Fibonacci/) | `legacy/Fibonacci` |
| [Grade-Classification](https://github.com/nix-daemon/Grade-Classification) | [`6d2b6d0cb43d`](https://github.com/nix-daemon/Grade-Classification/commit/6d2b6d0cb43d0900451c2aad51a13f74612d662a) | [cpp/Grade-Classification](cpp/Grade-Classification/) | `legacy/Grade-Classification` |
| [Leap-Year-Command-Line](https://github.com/nix-daemon/Leap-Year-Command-Line) | [`b3ee68c541a3`](https://github.com/nix-daemon/Leap-Year-Command-Line/commit/b3ee68c541a30df5980569e489f8e0dc9381c223) | [cpp/Leap-Year-Command-Line](cpp/Leap-Year-Command-Line/) | `legacy/Leap-Year-Command-Line` |
| [Let-s-Count](https://github.com/nix-daemon/Let-s-Count) | [`7788abb000c4`](https://github.com/nix-daemon/Let-s-Count/commit/7788abb000c4ef34440fb7dda1ed01fa0002110d) | [cpp/Let-s-Count](cpp/Let-s-Count/) | `legacy/Let-s-Count` |
| [asciiValue](https://github.com/nix-daemon/asciiValue) | [`8eed27aa823e`](https://github.com/nix-daemon/asciiValue/commit/8eed27aa823eee41865bf228f736c38ffafb3e04) | [cpp/asciiValue](cpp/asciiValue/) | `legacy/asciiValue` |
| [helloworld](https://github.com/nix-daemon/helloworld) | [`a2ed993ca621`](https://github.com/nix-daemon/helloworld/commit/a2ed993ca62146bb5c61436e5ff4d54893538f0d) | [cpp/helloworld](cpp/helloworld/) | `legacy/helloworld` |
| [upperCase](https://github.com/nix-daemon/upperCase) | [`1fb7a6c5449e`](https://github.com/nix-daemon/upperCase/commit/1fb7a6c5449eb3d6b6ed552766b16ae5102028ac) | [cpp/upperCase](cpp/upperCase/) | `legacy/upperCase` |
| [weeksAndDays](https://github.com/nix-daemon/weeksAndDays) | [`23fcfdc35679`](https://github.com/nix-daemon/weeksAndDays/commit/23fcfdc356798831a78439b70d3ba40f38caafeb) | [cpp/weeksAndDays](cpp/weeksAndDays/) | `legacy/weeksAndDays` |

[Back to the collection](README.md).
