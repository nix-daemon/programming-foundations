# Generate n Fibonacci terms

**Category:** programming foundations. **Status:** learning exercise.

A small C++ exercise preserved as part of the programming learning history.

## Source

- [fibonacci.cpp](fibonacci.cpp)

## Build

With a C++17 compiler, run the following from this repository. Output goes to a temporary path rather than replacing a tracked executable.

```bash
g++ -std=c++17 -Wall -Wextra fibonacci.cpp -o /tmp/Fibonacci-fibonacci
```

Uses fixed-size integer arithmetic; the supported input range is not defined.

These examples are retained for learning; they are not maintained security tools.

More work: [nix-daemon on GitHub](https://github.com/nix-daemon).
