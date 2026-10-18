# Two loop exercises

**Category:** programming foundations. **Status:** learning exercise.

A small C++ exercise preserved as part of the programming learning history.

## Source

- [countFor.cpp](countFor.cpp)
- [countWhile.cpp](countWhile.cpp)

## Build

With a C++17 compiler, run the following from this exercise directory. Output goes to a temporary path rather than replacing a tracked executable.

```bash
g++ -std=c++17 -Wall -Wextra countFor.cpp -o /tmp/Let-s-Count-countFor
g++ -std=c++17 -Wall -Wextra countWhile.cpp -o /tmp/Let-s-Count-countWhile
```

Both examples loop four times regardless of the supplied count. The intended input contract needs clarification.

These examples are retained for learning; they are not maintained security tools.

More work: [nix-daemon on GitHub](https://github.com/nix-daemon).

[Back to the collection](../../README.md) · [Migration and original history](../../MIGRATION.md).
