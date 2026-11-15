<div align="center">

<a href="https://42.fr/"><img src="https://raw.githubusercontent.com/doooriian/42-Badges/main/badges/ft_printfe.png" width="125" alt="Ft_printf 42 project badge" /></a>

# Ft_printf

**Formatted output in C**

<img src="https://img.shields.io/badge/42%20School-Project-2563EB?style=flat-square" alt="42 School project" />

</div>

---

## 🔎 Overview

**Ft_printf** is an individual project at 42 School that recreates the standard C `printf` function from scratch. This project focuses on handling formatted output with essential specifiers and conversions, mastering variadic arguments, and ensuring robust string manipulation. It’s a key step in building foundational skills for the 42 curriculum.

The goal? Deliver a reliable, custom `Printf` that mirrors the core functionality of the original.

---

## ✨ Key Features

### Supported Conversions
- [`%c`](https://github.com/doooriian/Ft_printf/blob/main/print.c) — Prints a single character.
- [`%s`](https://github.com/doooriian/Ft_printf/blob/main/print.c) — Prints a string.
- [`%p`](https://github.com/doooriian/Ft_printf/blob/main/print.c) — Prints a pointer address in hexadecimal.
- [`%d`/`%i`](https://github.com/doooriian/Ft_printf/blob/main/print.c) — Prints a decimal integer (signed).
- [`%u`](https://github.com/doooriian/Ft_printf/blob/main/print.c) — Prints an unsigned decimal integer.
- [`%x`/`%X`](https://github.com/doooriian/Ft_printf/blob/main/print_x_xx.c) — Prints a hexadecimal integer (lowercase or uppercase).
- [`%%`](https://github.com/doooriian/Ft_printf/blob/main/main.c) — Prints a literal percent sign.

### Core Files
- [`main.c`](https://github.com/doooriian/Ft_printf/blob/main/main.c) — Main file handling format string parsing and output.
- [`print.c`](https://github.com/doooriian/Ft_printf/blob/main/print.c) — Routes to the appropriate conversion function.
- [`utils.c`](https://github.com/doooriian/Ft_printf/blob/main/utils.c) — Contains several functions that are useful and necessary for other files.

---

## 🛠️ Technologies Used
- **[C](https://devdocs.io/c/)** — Core programming language.
- **[Makefile](https://www.gnu.org/software/make/manual/make.html)** — Build automation tool.

---

## 🚀 How to Build and Run

1. Clone repository
    ```bash
    git clone git@github.com:doooriian/Ft_printf.git
    ```

2. Go inside project directory and run `make`
    ```bash
    cd Ft_printf
    make
    ```
3. Include `printf.h` and link `libftprintf.a` in your program.


## 🧪 Testing

This project was tested using **[Francinette](https://github.com/xicodomingues/francinette)**, a widely-used third-party tester designed for 42 School projects, along with custom test cases to ensure compliance with the printf standard.

## 🏅 Results

Here’s my score for the Ft_printf project:

<p align="center">
  <img src="https://github.com/doooriian/42-Badges/blob/main/badges/100Grade.png" alt="Ft_printf Grade">
</p>

## 📬 Contact

Feel free to reach out or contribute to this project via [GitHub](https://github.com/doooriian)!
