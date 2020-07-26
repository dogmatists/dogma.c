# Dogma for C

[![Project license](https://img.shields.io/badge/license-Public%20Domain-blue.svg)](https://unlicense.org)
![C compatibility](https://img.shields.io/badge/c-C11%20%7C%20C18%20%7C%20C2x-blue)
[![Continuous integration](https://github.com/dogmatists/dogma.c/workflows/CI/badge.svg)](https://github.com/dogmatists/dogma.c/actions?query=workflow:CI)

<https://dogma.dev>

## Prerequisites

- [C11][] compiler (for example, [Clang][] 3.1+ or [GCC][] 4.6+)

[C11]:   https://en.wikipedia.org/wiki/C11_(C_standard_revision)
[Clang]: https://clang.llvm.org
[GCC]:   https://gcc.gnu.org

## Installation

### Installation from Source Code

```bash
$ git clone https://github.com/dogmatists/dogma.c.git

$ cd dogma.c

$ sudo make install
```

## Examples

### Including the header file

```c
#include <dogma.h>
```

### Checking the library version

### Miscellaneous examples

## Reference

### Constants

- `DOGMA_VERSION_MAJOR`
- `DOGMA_VERSION_MINOR`
- `DOGMA_VERSION_PATCH`

### Enums

### Structs

- [`Angle`](https://dogma.dev/Angle)
- [`Latitude`](https://dogma.dev/Latitude)
- [`Longitude`](https://dogma.dev/Longitude)

### Functions

- `AngleFromDegrees`
- `AngleFromRadians`
- `AngleFromTurns`
- `AngleToDegrees`
- `AngleToRadians`
- `AngleToTurns`
- `Latitude`
- `LatitudeToDegrees`
- `Longitude`
- `LongitudeToDegrees`

## See Also

Dogma for [C++][], [Dart][], [Protobuf][], [Python][], [Ruby][], and [Zig][].

[C]:        https://github.com/dogmatists/dogma.c
[C++]:      https://github.com/dogmatists/dogma.cpp
[Dart]:     https://github.com/dogmatists/dogma.dart
[Protobuf]: https://github.com/dogmatists/dogma.pb
[Python]:   https://github.com/dogmatists/dogma.py
[Ruby]:     https://github.com/dogmatists/dogma.rb
[Zig]:      https://github.com/dogmatists/dogma.zig
