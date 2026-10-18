# Count and sum integer digits

**Category:** programming foundations. **Status:** learning exercise.

A small C++ exercise preserved as part of the programming learning history.

## Source

- [countSumDigits.cpp](countSumDigits.cpp)

## Build

With a C++17 compiler, run the following from this repository. Output goes to a temporary path rather than replacing a tracked executable.

```bash
g++ -std=c++17 -Wall -Wextra countSumDigits.cpp -o /tmp/Counting-and-Summing-Digits-countSumDigits
```

Known issue: the digit counter is uninitialized, and the final message prints the consumed input rather than the original number.

These examples are retained for learning; they are not maintained security tools.

More work: [nix-daemon on GitHub](https://github.com/nix-daemon).
