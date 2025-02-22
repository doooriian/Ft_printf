<br />
<p align="center">
  <a href="https://raw.githubusercontent.com/othneildrew/Best-README-Template/master/images/logo.png">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/1200px-42_Logo.svg.png" alt="42 Logo" width="250" height="250">
  </a>

  <h1 align="center">Ft_printf</h1>

  <p align="center">
    A custom Printf implementation from 42 School
    <br />
    <br />
    <img src="https://github.com/doooriian/42-Badges/blob/main/badges/ft_printfe.png" alt="Ft_printf Badge" width="150">
  </p>
</p>

<p align="center">
  <img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/doooriian/Ft_printf?color=1A237E" />
  <img alt="Code language count" src="https://img.shields.io/github/languages/count/doooriian/Ft_printf?color=00BCD4" />
  <img alt="GitHub top language" src="https://img.shields.io/github/languages/top/doooriian/Ft_printf?color=7B1FA2" />
  <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/doooriian/Ft_printf?color=D32F2F" />
</p>

---

## ✨ Overview

**Ft_printf** is an individual project at 42 School that recreates the standard C `printf` function from scratch. This project focuses on handling formatted output with essential specifiers and conversions, mastering variadic arguments, and ensuring robust string manipulation. It’s a key step in building foundational skills for the 42 curriculum.

The goal? Deliver a reliable, custom `Printf` that mirrors the core functionality of the original.

---

## 📑 Key Features

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

Clone the repository and use the following commands in your terminal:

```bash
# Compile the project and create the library
make all

# Remove object files
make clean

# Remove object files and the library
make fclean

# Clean everything and recompile
make re

```

## 🧪 Testing

This project was tested using **[Francinette](https://github.com/xicodomingues/francinette)**, a widely-used third-party tester designed for 42 School projects, along with custom test cases to ensure compliance with the printf standard.

## ✅ Results

Here’s my score for the Ft_printf project:

<p align="center">
  <img src="https://github.com/doooriian/42-Badges/blob/main/badges/100Grade.png" alt="Ft_printf Grade">
</p>

## 📬 Contact

Feel free to reach out or contribute to this project via [GitHub](https://github.com/doooriian)!
