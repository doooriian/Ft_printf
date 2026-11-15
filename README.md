<div align="center">

<a href="https://42.fr/"><img src="https://raw.githubusercontent.com/doooriian/42-Badges/main/badges/ft_printfm.png" alt="Ft_printf 42 badge" width="125" /></a>

# Ft_printf

**42 School · 🖨️ Software engineering project**

<img src="https://img.shields.io/badge/42_Project-C%20%7C%20Formatting-D97706?style=flat-square" alt="Ft_printf technology" />
<img src="https://img.shields.io/badge/Documentation-Project_Overview-334155?style=flat-square" alt="Project documentation" />

</div>

---


---

## 🔎 Overview

An implementation of a formatted printing function inspired by the standard `printf`, built around variadic arguments and format parsing.


---

## ✨ Features

- Read and interpret `%` format specifiers
- Format characters and strings
- Format signed and unsigned integers and hexadecimal values
- Build a reusable static library for other C projects


---

## 🧩 Technical approach

The implementation is split into formatting, hexadecimal conversion and helper modules. The public interface lives in `printf.h`.

> **Tech stack** · C · Variadic arguments · Static library.


---

## 🚀 Build and usage

```bash
git clone https://github.com/doooriian/Ft_printf.git
cd Ft_printf
make
```

This generates `libftprintf.a`. Include `printf.h` and link the library from a C program.

```bash
make fclean
```


---

## 🧪 Verification

Review the output with representative inputs and edge cases. No automated CI test suite is included in this repository; build and behaviour should be verified in a compatible local environment.


---

## ⚠️ Notes and limitations

Implements the conversions supported by this project, not the full libc `printf` specification. See `printf.h` and the source for actual supported flags and conversions.

---

<div align="center">

<sub>Part of the <a href="https://42.fr/">42 curriculum</a> · <a href="https://github.com/doooriian">Back to my GitHub profile</a></sub>

</div>
