# Libft

## 📘 Project Overview

**Libft** is a foundational C project from the 42 curriculum. Its goal is to implement a personal version of standard C library functions, to gain a deep understanding of their behavior and memory handling.

> **Disclaimer:**  
> This document is an unofficial summary written for educational and documentation purposes.  
> It is not affiliated with or endorsed by 42 or its partners.  
> All 42 students are responsible for adhering to the academic integrity policy.  
> You may **not** publish or share any part of the official subject PDF, evaluation scripts, or Moulinette content.

---

## Contents

- [Goals](#goals)
- [General Requirements](#general-requirements)
- [Part 1 – Libc Functions](#part-1--libc-functions)
- [Part 2 – Additional Functions](#part-2--additional-functions)
- [Bonus Part](#bonus-part)
- [Submission Guidelines](#submission-guidelines)

---

## Goals

- Recreate a subset of standard C library functions.
- Understand low-level memory operations.
- Learn good coding practices and use of static functions.
- Produce a static library (`libft.a`) for use in future 42 projects.

---

## General Requirements

- Written in **C**, following the **42 Norm**.
- No memory leaks or undefined behavior.
- Use only allowed standard functions.
- All files must compile with `-Wall -Wextra -Werror`.
- Global variables are **forbidden**.
- Helper functions must be declared `static`.
- Use `ar` to create the library (not `libtool`).
- `libft.a` must be created at the **root** of the repository.
- Submit only necessary and used files.

### Makefile

Must include rules:
- `all`, `clean`, `fclean`, `re`, `$(NAME)`
- Bonus rule if implementing bonus functions

---

## Part 1 – Libc Functions

Reimplement the following standard C functions with the prefix `ft_`.  
They must behave like their libc counterparts (except for `restrict` qualifiers and C99 constraints).

**Functions to implement:**

- Character checks:  
  `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`

- Character conversion:  
  `toupper`, `tolower`

- String length and manipulation:  
  `strlen`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strlcpy`, `strlcat`

- Memory operations:  
  `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`

- Others:  
  `atoi`, `calloc`, `strdup`

> Note: `calloc` behavior must follow subject's custom rule: if `nmemb` or `size` is 0, return a valid pointer that can be passed to `free()`.

---

## Part 2 – Additional Functions

These are utility functions not found in libc (or present in a different form).

### String Operations

- `ft_substr`  
  Extracts a substring from a given string.

- `ft_strjoin`  
  Concatenates two strings.

- `ft_strtrim`  
  Trims characters from the start and end of a string.

- `ft_split`  
  Splits a string into an array using a delimiter.

- `ft_itoa`  
  Converts an integer to a string.

- `ft_strmapi`  
  Maps a function over each character of a string.

- `ft_striteri`  
  Iterates a function over a string, modifying it.

### File Descriptor Output

- `ft_putchar_fd`  
  Writes a character to a file descriptor.

- `ft_putstr_fd`  
  Writes a string to a file descriptor.

- `ft_putendl_fd`  
  Writes a string followed by newline to a file descriptor.

- `ft_putnbr_fd`  
  Writes an integer to a file descriptor.

---

## Bonus Part

If the mandatory part is complete, the bonus part allows you to implement a **subset of linked list utilities**.

### Bonus Requirements

Create the following:

- A linked list structure:
  ```c
  typedef struct s_list {
      void            *content;
      struct s_list   *next;
  } t_list;
  ```

- Functions such as:
    - `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
    - `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

> Bonus functions must be in `_bonus.c`/`.h` files and not mixed with mandatory code.

---

## Submission Guidelines

- Code must be submitted to the Git repository assigned by 42.
- Only the contents of the repository will be evaluated.
- Evaluation includes peer reviews and possible automated testing via **Deepthought**.
- If a norm or runtime error is found during evaluation, grading is stopped immediately.

---

## Testing

Even though not required, writing your own test suite is **highly recommended**.  
Tests help during:
- Debugging
- Evaluation defense
- Collaborating with peers

---

## Final Note

This project lays the groundwork for all other C projects at 42.  
A strong understanding of memory, string manipulation, and pointer arithmetic is essential.

---

