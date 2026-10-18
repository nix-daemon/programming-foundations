# Programming foundations

Programming exercises and learning history, organized in one working collection.

**Status:** introductory learning material. The first collection contains 23 C++ exercise directories and 24 source files. These are practice programs, with known limitations, rather than maintained security tools.

## C++ exercises

| Exercise | Topic |
|---|---|
| [Absolute-Value](cpp/Absolute-Value/README.md) | Integer absolute value |
| [Adding-Numbers](cpp/Adding-Numbers/README.md) | Add two integers |
| [AreaOfACircle](cpp/AreaOfACircle/README.md) | Circle area calculation |
| [BMI-Imperial](cpp/BMI-Imperial/README.md) | Imperial-to-metric BMI calculation |
| [BMI-Metric](cpp/BMI-Metric/README.md) | Metric BMI calculation |
| [Classifying-a-Character](cpp/Classifying-a-Character/README.md) | ASCII character category branches |
| [Coin-Converter](cpp/Coin-Converter/README.md) | Convert dollars/cents to coin denominations |
| [Coin-Counter](cpp/Coin-Counter/README.md) | Sum coin denominations |
| [Compute-Expression-Value](cpp/Compute-Expression-Value/README.md) | Four-operation expression evaluator |
| [Computing-Average](cpp/Computing-Average/README.md) | Average a sequence of student grades |
| [Convert-12--hour-to-24-hour](cpp/Convert-12--hour-to-24-hour/README.md) | Actual implementation converts 24-hour time to 12-hour time |
| [Counting-Even-and-Odd-Numbers](cpp/Counting-Even-and-Odd-Numbers/README.md) | Classify parity balance across four integers |
| [Counting-and-Summing-Digits](cpp/Counting-and-Summing-Digits/README.md) | Count and sum integer digits |
| [Determine-Parity](cpp/Determine-Parity/README.md) | Integer parity |
| [Even-Numbers](cpp/Even-Numbers/README.md) | Generate first n positive even integers |
| [Fibonacci](cpp/Fibonacci/README.md) | Generate n Fibonacci terms |
| [Grade-Classification](cpp/Grade-Classification/README.md) | Two-grade classification branches |
| [Leap-Year-Command-Line](cpp/Leap-Year-Command-Line/README.md) | Gregorian leap-year check from argv |
| [Let-s-Count](cpp/Let-s-Count/README.md) | Two loop exercises |
| [asciiValue](cpp/asciiValue/README.md) | Character-to-code conversion |
| [helloworld](cpp/helloworld/README.md) | C++ hello-world |
| [upperCase](cpp/upperCase/README.md) | ASCII lowercase-to-uppercase offset |
| [weeksAndDays](cpp/weeksAndDays/README.md) | Split days into full weeks/remainder |

## Build and run one exercise

Each exercise is a separate program. From the collection root, with a C++17 compiler:

```bash
mkdir -p /tmp/programming-foundations
g++ -std=c++17 -Wall -Wextra cpp/Fibonacci/fibonacci.cpp -o /tmp/programming-foundations/fibonacci
printf '6\n' | /tmp/programming-foundations/fibonacci
```

Expected output is the first six terms: `1`, `1`, `2`, `3`, `5`, `8`, each on its own line. Each exercise README identifies its source and a build command to run from that exercise directory. Pass a year argument when running the leap-year program.

Historical Windows executables and editor settings are retained for preservation. Build from source for your platform; the existing Windows editor tasks do not configure a Linux compiler.

## Adding new work

Put a related C++ exercise in `cpp/<descriptive-name>/` with its source and a short README. Explain its purpose, how to run it, and any known limits. Keep generated builds outside the source directories. Add meaningful checks when behavior warrants them, and attribute book/course foundations where applicable.

Small exercises can stay here. A project with an independent purpose and development path can later move into its own repository.

## Current limitations

This migration preserves existing behavior. The digit-counting example has an uninitialized counter and prints the consumed input as zero. Several exercises lack input/range handling. The time-conversion repository name describes the opposite of its actual conversion direction, and the counting-loop contract needs clarification. Code corrections are a separate maintenance pass.

## History and related work

[Migration and history notes](MIGRATION.md) map every original repository and commit to its new directory. Full imported histories are retained, with `legacy/<original-name>` tags marking the source tips.

Related collections: [Python foundations](https://github.com/nix-daemon/python_practice), [book exercises](https://github.com/nix-daemon/automate_boring_stuff), and [Python utilities](https://github.com/nix-daemon/python_projects). [GitHub profile](https://github.com/nix-daemon).
