# Ft_printf

> **42 School project** · C · Variadic functions

An implementation of a formatted printing function inspired by the standard `printf`, built around variadic arguments and format parsing.

## Overview

An implementation of a formatted printing function inspired by the standard `printf`, built around variadic arguments and format parsing.

## Features

- Read and interpret `%` format specifiers
- Format characters and strings
- Format signed and unsigned integers and hexadecimal values
- Build a reusable static library for other C projects

## Technical approach

The implementation is split into formatting, hexadecimal conversion and helper modules. The public interface lives in `printf.h`.

**Stack:** C · Variadic arguments · Static library.

## Build and usage

```bash
git clone https://github.com/doooriian/Ft_printf.git
cd Ft_printf
make
```

This generates `libftprintf.a`. Include `printf.h` and link the library from a C program.

```bash
make fclean
```

## Verification

Review the output with representative inputs and edge cases. No automated CI test suite is included in this repository; build and behaviour should be verified in a compatible local environment.

## Notes and limitations

Implements the conversions supported by this project, not the full libc `printf` specification. See `printf.h` and the source for actual supported flags and conversions.

---

Part of the [42 curriculum](https://42.fr/). Explore the other projects on [my GitHub profile](https://github.com/doooriian).
