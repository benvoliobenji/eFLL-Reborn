# eFLL-Reborn (Embedded Fuzzy Logic Library Reborn)

![GitHub tag (latest SemVer)](https://img.shields.io/github/v/release/benvoliobenji/eFLL-Reborn)
![GitHub](https://img.shields.io/github/license/benvoliobenji/eFLL-Reborn)
![Code coverage](https://img.shields.io/codecov/c/github/benvoliobenji/eFLL-Reborn)

eFLL-Reborn is an updated take on the original [eFLL][efll] with the intention
of bringing the abandoned library back to life with some needed quality-of-life
improvements.

## Development Setup

### Prerequisites

- Install [LLVM][llvm] - Version 18 or greater
- (Optional) Install [MSVC][msvc]
- (Optional) Install [GCC][gcc]
- Code Editor (VSCode suggested)

The optional installs can be used to validate cross-compilation, but only
`clang` is neccessary.

## What's Different?

The two largest differences is that the project now targets C++14 and the
integration of CMake.

### C++14

The previous library, while only including <stdlib.h>, was always compiling in
C++. As it wasn't a static library, it never _truly_ supported C.

I've dropped the pretense entirerly.

eFLL-Reborn now targets C++14 as a library standard. Because most modern
embedded compilers support a _minimum_ of C++14, I'm targeting the lowest common
denominator.

### CMake

Packaging C++ libraries and applications has come a long way in the years since
eFLL was published and abandoned. Now most C++ project leverage CMake at least
to some extent.

eFLL-Reborn takes the original implementation and wraps it in CMake, making it
much easier to add to existing C++ applications already using CMake.

### Improvements

Support for clang-tidy and clang-format have come to the library as well, which
has highlighted _numerous_ issues with the original eFLL. Reborn will clean up
these issues as much as possible while retaining the original spirit and
functionality of eFLL.

### Actual Support

Use of fuzzy logic in small, embedded packages is on the rise. I hope to foster
a growing community of contributers and supporters to make embedded fuzzy logic
easy for all developers and companies.

## What's the Same?

### Same API

One of the core philosophies I had while forking and maintaining this project
was to make it easy to shift from the old eFLL library to Reborn.

My intent is that the original API **will not change**.

### Same Core Infrastructure

Similar to keeping the API, I hope to keep the general performance and behavior
of the library on par if not better than the original eFLL.

Favoring consistency and predictability over optimizations, Reborn intends to
keep the core business logic intact.

## Characteristics

It has no explicit limitations on quantity of Fuzzy, Fuzzy Rules, Inputs or
Outputs, these limited processing power and storage of each microcontroller

It uses the process:

(MAX-MIN) and (Mamdani Minimum) for inference and composition, (CENTER OF AREA)
to defuzzification in a continuous universe.

Tested with [GTest](http://code.google.com/p/googletest/) for C, Google Inc.

## Special Thanks to Contributers

[@benvoliobenji](https://github.com/benvoliobenji/),
[@stanczyk4](https://github.com/stanczyk4),
[@myrrlyn](https://github.com/myrrlyn)

## Original eFLL Authors

**Authors:** AJ Alves <aj.alves@zerokol.com>; **Co authors:** Dr. Ricardo Lira
<ricardor_usp@yahoo.com.br>, Msc. Marvin Lemos <marvinlemos@gmail.com>, Douglas
S. Kridi <douglaskridi@gmail.com>, Kannya Leal <kannyal@hotmail.com>

## LICENSE

MIT License

[efll]: https://github.com/alvesoaj/eFLL
[llvm]: https://releases.llvm.org/download.html
[msvc]: https://visualstudio.microsoft.com/vs/features/cplusplus/
[gcc]: https://gcc.gnu.org/
