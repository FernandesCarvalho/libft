# 📚 Libft — 42 School

> My own C library, built from scratch as part of the 42 School Common Core.


\


## 📖 Table of Contents# 📚 Libft — 42 School

> My own C library, built from scratch as part of the 42 School Common Core.


\


## 📖 Table of Contents

- [About the Project](#-about-the-project)
- [Objectives](#-objectives)
- [Project Structure](#-project-structure)
- [Requirements](#-requirements)
- [Compilation](#-compilation)
- [How to Use the Library](#-how-to-use-the-library)
- [Library Functions](#-library-functions)
  - [Character Checks](#1-character-checks)
  - [Character Conversion](#2-character-conversion)
  - [String Manipulation](#3-string-manipulation)
  - [Memory Manipulation](#4-memory-manipulation)
  - [Number Conversion](#5-number-conversion)
  - [Memory Allocation](#6-memory-allocation)
  - [Additional Functions](#7-additional-functions)
  - [Linked Lists — Bonus](#8-linked-lists--bonus)
- [Best Practices](#-best-practices)
- [Testing](#-testing)
- [What I Learned](#-what-i-learned)
- [References](#-references)

---

## 🧠 About the Project

**Libft** is a foundational project in the 42 School Common Core. Its goal is to build a personal C library by reimplementing several standard library functions and developing additional utility functions.

Instead of relying directly on certain standard library functions, this project encourages understanding their behavior and implementing custom versions.

The resulting library can be reused in future C projects.

## 🎯 Objectives

- Understand strings, arrays, and pointers.
- Work with memory addresses and dynamic memory allocation.
- Learn how to use `malloc` and `free`.
- Implement memory and string manipulation functions.
- Understand functions that receive other functions as arguments.
- Work with structures and linked lists.
- Create a static library using `ar`.
- Automate compilation with a `Makefile`.
- Write organized, reusable, and robust C code.

## 📁 Project Structure

The exact structure may vary depending on the version of the assignment. One possible layout is:

```text
libft/
├── Makefile
├── libft.a
├── includes/
│   └── libft.h
└── srcs/
    ├── ft_isalpha.c
    ├── ft_isdigit.c
    ├── ft_strlen.c
    ├── ft_memset.c
    ├── ft_strdup.c
    └── ...
```

| File or directory  | Purpose                                      |
| ------------------ | -------------------------------------------- |
| `Makefile`         | Automates compilation.                       |
| `includes/libft.h` | Declares public functions and structures.    |
| `srcs/`            | Contains function implementations.           |
| `libft.a`          | Static library generated during compilation. |
| `*.o`              | Object files produced by the compiler.       |

## ⚙️ Requirements

Before compiling, make sure you have:

- A C compiler, such as `cc` or `gcc`.
- `make`.
- `ar`, which creates static libraries.
- An environment compatible with the commands used in the Makefile.

## 🔨 Compilation

From the project root directory, run:

```bash
make
```

This executes the default Makefile target and creates `libft.a`.

### Available Commands

| Command       | Description                                   |
| ------------- | --------------------------------------------- |
| `make`        | Compiles the library.                         |
| `make all`    | Executes the main target.                     |
| `make clean`  | Removes object files (`.o`).                  |
| `make fclean` | Removes object files and `libft.a`.           |
| `make re`     | Cleans previous build outputs and recompiles. |

To perform a clean rebuild:

```bash
make fclean
make
```

## 🔌 How to Use the Library

After compiling the library, you can link it to a C program.

### 1. Include the Header

In your C source file:

```c
#include "libft.h"
```

The header contains declarations for the functions available in your library.

### 2. Compile Your Program

For example, if your program is called `main.c`:

```bash
cc -Wall -Wextra -Werror \
   -I includes \
   main.c libft.a \
   -o program
```

Then run it:

```bash
./program
```

**What do the options mean?**

- `-Wall -Wextra -Werror`: enables warnings and treats them as errors.
- `-I includes`: tells the compiler where to find header files.
- `main.c`: your program's source file.
- `libft.a`: the static library containing your implementations.
- `-o program`: sets the output executable's name.

### 3. Usage Example

```c
#include "libft.h"

int main(void)
{
    char message[] = "My Libft is working!\n";

    ft_putstr_fd(message, 1);
    return (0);
}
```

This example assumes that `ft_putstr_fd` is implemented in your library. File descriptor `1` represents standard output, usually the terminal.

---

## 🧩 Library Functions

The following sections describe functions found in the classic Libft project. Include only the functions actually implemented in your version.

### 1. Character Checks

These functions check character properties. They return a non-zero value when the condition is true and zero when it is false.

| Function     | Description                                                 |
| ------------ | ----------------------------------------------------------- |
| `ft_isalpha` | Checks whether a character is a letter.                     |
| `ft_isdigit` | Checks whether a character is a digit from `0` to `9`.      |
| `ft_isalnum` | Checks whether a character is a letter or digit.            |
| `ft_isascii` | Checks whether a value belongs to the ASCII range `0–127`.  |
| `ft_isprint` | Checks whether a character is printable in the ASCII range. |

Example:

```c
if (ft_isdigit('7'))
{
    /* The character is a digit. */
}
```

These functions are useful for validating input, parsing strings, and checking characters before conversion.

### 2. Character Conversion

| Function     | Description                                |
| ------------ | ------------------------------------------ |
| `ft_toupper` | Converts a lowercase letter to uppercase.  |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

Example:

```c
int upper = ft_toupper('a'); /* 'A' */
int lower = ft_tolower('Z'); /* 'z' */
```

Characters that do not require conversion are returned unchanged.

### 3. String Manipulation

| Function     | Description                                                     |
| ------------ | --------------------------------------------------------------- |
| `ft_strlen`  | Calculates a string's length, excluding the terminating `'\0'`. |
| `ft_strlcpy` | Copies a string into a destination with a size limit.           |
| `ft_strlcat` | Concatenates strings while respecting the destination size.     |
| `ft_strchr`  | Finds the first occurrence of a character.                      |
| `ft_strrchr` | Finds the last occurrence of a character.                       |
| `ft_strncmp` | Compares up to a specified number of characters.                |
| `ft_strnstr` | Searches for a substring within a specified limit.              |
| `ft_strdup`  | Duplicates a string using dynamically allocated memory.         |

Example:

```c
size_t length = ft_strlen("Libft");
```

The result is `5`, because the terminating `'\0'` is not included in the string length.

Example of string comparison:

```c
if (ft_strncmp("abc", "abd", 3) < 0)
{
    /* The first string comes before the second. */
}
```

The comparison is based on character values. The result does not have to be exactly `-1`, `0`, or `1`; what matters is whether it is negative, zero, or positive.

### 4. Memory Manipulation

These functions operate on blocks of memory, which are not necessarily null-terminated strings.

| Function     | Description                                                        |
| ------------ | ------------------------------------------------------------------ |
| `ft_memset`  | Fills a memory region with a byte.                                 |
| `ft_bzero`   | Sets a memory region to zero.                                      |
| `ft_memcpy`  | Copies a memory region when source and destination do not overlap. |
| `ft_memmove` | Copies memory while allowing overlapping regions.                  |
| `ft_memchr`  | Searches for a byte in a memory region.                            |
| `ft_memcmp`  | Compares two memory regions byte by byte.                          |

Example:

```c
char buffer[10];

ft_memset(buffer, 0, sizeof(buffer));
```

This initializes every byte in `buffer` to zero.

**Important difference:** `ft_memcpy` assumes that the source and destination regions do not overlap. Use `ft_memmove` when overlapping regions are possible.

### 5. Number Conversion

| Function  | Description                                        |
| --------- | -------------------------------------------------- |
| `ft_atoi` | Converts a textual representation into an integer. |
| `ft_itoa` | Converts an integer into a string.                 |

Example:

```c
int number = ft_atoi("42");
```

The result is the integer `42`.

Example of the reverse conversion:

```c
char *text = ft_itoa(-42);

if (text)
{
    ft_putstr_fd(text, 1);
    free(text);
}
```

`ft_itoa` typically returns a dynamically allocated string. When you no longer need it, release the memory using `free`.

### 6. Memory Allocation

| Function    | Description                                         |
| ----------- | --------------------------------------------------- |
| `ft_calloc` | Allocates memory and initializes its bytes to zero. |

Example:

```c
int *numbers = ft_calloc(5, sizeof(int));

if (!numbers)
    return (1);

/* Use numbers... */

free(numbers);
```

Dynamically allocated memory should be released when it is no longer needed. Always handle allocation failures according to the function's contract.

### 7. Additional Functions

These functions combine simpler operations to make common string tasks easier.

| Function        | Description                                                          |
| --------------- | -------------------------------------------------------------------- |
| `ft_substr`     | Creates a substring from a starting position and length.             |
| `ft_strjoin`    | Creates a new string by joining two strings.                         |
| `ft_strtrim`    | Removes specified characters from the beginning and end of a string. |
| `ft_split`      | Splits a string into multiple strings using a delimiter.             |
| `ft_strmapi`    | Creates a new string by applying a function to each character.       |
| `ft_striteri`   | Applies a function to each character of the original string.         |
| `ft_putchar_fd` | Writes a character to a file descriptor.                             |
| `ft_putstr_fd`  | Writes a string to a file descriptor.                                |
| `ft_putendl_fd` | Writes a string followed by a newline.                               |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor.                              |

#### Example: `ft_strjoin`

```c
char *result = ft_strjoin("Hello, ", "42!");

if (!result)
    return (1);

ft_putstr_fd(result, 1);
free(result);
```

The result is `Hello, 42!`.

#### Example: `ft_split`

```c
char **words = ft_split("one two three", ' ');
```

The function splits the string into elements separated by spaces. In the classic implementation, the resulting array ends with a `NULL` pointer.

When you finish using the elements, free each string and then the array, according to your function's contract.

#### Example: `ft_substr`

```c
char *part = ft_substr("Programming", 0, 7);
```

The substring starts at index `0` and can contain up to seven characters: `Program`.

### 8. Linked Lists — Bonus

The classic bonus introduces linked lists, where each node contains data and a pointer to the next node.

A traditional structure looks like this:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

This definition should be included in your header if linked-list functions are part of your implementation.

| Function          | Description                                                         |
| ----------------- | ------------------------------------------------------------------- |
| `ft_lstnew`       | Creates a new node.                                                 |
| `ft_lstadd_front` | Adds a node to the beginning of the list.                           |
| `ft_lstsize`      | Counts the nodes in the list.                                       |
| `ft_lstlast`      | Returns the last node.                                              |
| `ft_lstadd_back`  | Adds a node to the end of the list.                                 |
| `ft_lstdelone`    | Deletes one node and frees its content using the provided function. |
| `ft_lstclear`     | Deletes and frees every node in the list.                           |
| `ft_lstiter`      | Applies a function to each node's content.                          |
| `ft_lstmap`       | Creates a new list by transforming each node's content.             |

These functions help develop an understanding of dynamic data structures and prepare for future projects that require flexible storage.

---

## 🛡️ Best Practices

When developing or using Libft, keep the following points in mind:

- **Validate pointers:** check that arguments are valid whenever the function's contract requires it.
- **Handle `malloc` failures:** never assume an allocation will always succeed.
- **Free allocated memory:** make sure every allocation has a clearly defined lifecycle.
- **Avoid out-of-bounds access:** check indices and memory-region sizes.
- **Respect function prototypes:** keep header declarations consistent with implementations.
- **Follow Norminette:** check the coding-style rules required by your version of the project.
- **Test edge cases:** empty strings, negative values, size limits, and failed allocations are all important.

## 🧪 Testing

To validate the library, start by rebuilding everything:

```bash
make fclean
make
```

Then test individual functions and check edge cases.

Validation checklist:

- [ ] All required functions compile.
- [ ] Function prototypes in `libft.h` match their implementations.
- [ ] The `libft.a` library is created in the project root.
- [ ] `make clean` removes `.o` files but keeps `libft.a`.
- [ ] `make fclean` removes `.o` files and `libft.a`.
- [ ] `make re` cleans and rebuilds the library.
- [ ] Functions that allocate memory handle failures correctly.
- [ ] Bonus functions, if implemented, are tested separately.
- [ ] The project follows the requirements of the assigned version.

External tests are useful, but they do not replace the official subject or guarantee a passing evaluation at 42.

## 💡 What I Learned

This project helps consolidate fundamental C programming concepts:

- Pointer and memory-address manipulation.
- Strings and arrays terminated by `'\0'`.
- Dynamic memory allocation and deallocation.
- Byte-level and memory-block operations.
- Functions and function pointers.
- Structures and linked lists.
- Compilation, object files, and static libraries.
- Build automation with Makefiles.

Libft provides a reusable foundation for other Common Core projects, provided the required functions are implemented and used according to their contracts.

## 🔗 References

- [42 School](https://42.fr/)
- [GNU Make Documentation](https://www.gnu.org/software/make/manual/)
- [GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [Linux man-pages](https://man7.org/linux/man-pages/)

---

*Project developed as part of the 42 School Common Core journey.*


- [About the Project](#-about-the-project)
- [Objectives](#-objectives)
- [Project Structure](#-project-structure)
- [Requirements](#-requirements)
- [Compilation](#-compilation)
- [How to Use the Library](#-how-to-use-the-library)
- [Library Functions](#-library-functions)
  - [Character Checks](#1-character-checks)
  - [Character Conversion](#2-character-conversion)
  - [String Manipulation](#3-string-manipulation)
  - [Memory Manipulation](#4-memory-manipulation)
  - [Number Conversion](#5-number-conversion)
  - [Memory Allocation](#6-memory-allocation)
  - [Additional Functions](#7-additional-functions)
  - [Linked Lists — Bonus](#8-linked-lists--bonus)
- [Best Practices](#-best-practices)
- [Testing](#-testing)
- [What I Learned](#-what-i-learned)
- [References](#-references)

---

## 🧠 About the Project

**Libft** is a foundational project in the 42 School Common Core. Its goal is to build a personal C library by reimplementing several standard library functions and developing additional utility functions.

Instead of relying directly on certain standard library functions, this project encourages understanding their behavior and implementing custom versions.

The resulting library can be reused in future C projects.

## 🎯 Objectives

- Understand strings, arrays, and pointers.
- Work with memory addresses and dynamic memory allocation.
- Learn how to use `malloc` and `free`.
- Implement memory and string manipulation functions.
- Understand functions that receive other functions as arguments.
- Work with structures and linked lists.
- Create a static library using `ar`.
- Automate compilation with a `Makefile`.
- Write organized, reusable, and robust C code.

## 📁 Project Structure

The exact structure may vary depending on the version of the assignment. One possible layout is:

```text
libft/
├── Makefile
├── libft.a
├── includes/
│   └── libft.h
└── srcs/
    ├── ft_isalpha.c
    ├── ft_isdigit.c
    ├── ft_strlen.c
    ├── ft_memset.c
    ├── ft_strdup.c
    └── ...
```

| File or directory  | Purpose                                      |
| ------------------ | -------------------------------------------- |
| `Makefile`         | Automates compilation.                       |
| `includes/libft.h` | Declares public functions and structures.    |
| `srcs/`            | Contains function implementations.           |
| `libft.a`          | Static library generated during compilation. |
| `*.o`              | Object files produced by the compiler.       |

## ⚙️ Requirements

Before compiling, make sure you have:

- A C compiler, such as `cc` or `gcc`.
- `make`.
- `ar`, which creates static libraries.
- An environment compatible with the commands used in the Makefile.

## 🔨 Compilation

From the project root directory, run:

```bash
make
```

This executes the default Makefile target and creates `libft.a`.

### Available Commands

| Command       | Description                                   |
| ------------- | --------------------------------------------- |
| `make`        | Compiles the library.                         |
| `make all`    | Executes the main target.                     |
| `make clean`  | Removes object files (`.o`).                  |
| `make fclean` | Removes object files and `libft.a`.           |
| `make re`     | Cleans previous build outputs and recompiles. |

To perform a clean rebuild:

```bash
make fclean
make
```

## 🔌 How to Use the Library

After compiling the library, you can link it to a C program.

### 1. Include the Header

In your C source file:

```c
#include "libft.h"
```

The header contains declarations for the functions available in your library.

### 2. Compile Your Program

For example, if your program is called `main.c`:

```bash
cc -Wall -Wextra -Werror \
   -I includes \
   main.c libft.a \
   -o program
```

Then run it:

```bash
./program
```

**What do the options mean?**

- `-Wall -Wextra -Werror`: enables warnings and treats them as errors.
- `-I includes`: tells the compiler where to find header files.
- `main.c`: your program's source file.
- `libft.a`: the static library containing your implementations.
- `-o program`: sets the output executable's name.

### 3. Usage Example

```c
#include "libft.h"

int main(void)
{
    char message[] = "My Libft is working!\n";

    ft_putstr_fd(message, 1);
    return (0);
}
```

This example assumes that `ft_putstr_fd` is implemented in your library. File descriptor `1` represents standard output, usually the terminal.

---

## 🧩 Library Functions

The following sections describe functions found in the classic Libft project. Include only the functions actually implemented in your version.

### 1. Character Checks

These functions check character properties. They return a non-zero value when the condition is true and zero when it is false.

| Function     | Description                                                 |
| ------------ | ----------------------------------------------------------- |
| `ft_isalpha` | Checks whether a character is a letter.                     |
| `ft_isdigit` | Checks whether a character is a digit from `0` to `9`.      |
| `ft_isalnum` | Checks whether a character is a letter or digit.            |
| `ft_isascii` | Checks whether a value belongs to the ASCII range `0–127`.  |
| `ft_isprint` | Checks whether a character is printable in the ASCII range. |

Example:

```c
if (ft_isdigit('7'))
{
    /* The character is a digit. */
}
```

These functions are useful for validating input, parsing strings, and checking characters before conversion.

### 2. Character Conversion

| Function     | Description                                |
| ------------ | ------------------------------------------ |
| `ft_toupper` | Converts a lowercase letter to uppercase.  |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

Example:

```c
int upper = ft_toupper('a'); /* 'A' */
int lower = ft_tolower('Z'); /* 'z' */
```

Characters that do not require conversion are returned unchanged.

### 3. String Manipulation

| Function     | Description                                                     |
| ------------ | --------------------------------------------------------------- |
| `ft_strlen`  | Calculates a string's length, excluding the terminating `'\0'`. |
| `ft_strlcpy` | Copies a string into a destination with a size limit.           |
| `ft_strlcat` | Concatenates strings while respecting the destination size.     |
| `ft_strchr`  | Finds the first occurrence of a character.                      |
| `ft_strrchr` | Finds the last occurrence of a character.                       |
| `ft_strncmp` | Compares up to a specified number of characters.                |
| `ft_strnstr` | Searches for a substring within a specified limit.              |
| `ft_strdup`  | Duplicates a string using dynamically allocated memory.         |

Example:

```c
size_t length = ft_strlen("Libft");
```

The result is `5`, because the terminating `'\0'` is not included in the string length.

Example of string comparison:

```c
if (ft_strncmp("abc", "abd", 3) < 0)
{
    /* The first string comes before the second. */
}
```

The comparison is based on character values. The result does not have to be exactly `-1`, `0`, or `1`; what matters is whether it is negative, zero, or positive.

### 4. Memory Manipulation

These functions operate on blocks of memory, which are not necessarily null-terminated strings.

| Function     | Description                                                        |
| ------------ | ------------------------------------------------------------------ |
| `ft_memset`  | Fills a memory region with a byte.                                 |
| `ft_bzero`   | Sets a memory region to zero.                                      |
| `ft_memcpy`  | Copies a memory region when source and destination do not overlap. |
| `ft_memmove` | Copies memory while allowing overlapping regions.                  |
| `ft_memchr`  | Searches for a byte in a memory region.                            |
| `ft_memcmp`  | Compares two memory regions byte by byte.                          |

Example:

```c
char buffer[10];

ft_memset(buffer, 0, sizeof(buffer));
```

This initializes every byte in `buffer` to zero.

**Important difference:** `ft_memcpy` assumes that the source and destination regions do not overlap. Use `ft_memmove` when overlapping regions are possible.

### 5. Number Conversion

| Function  | Description                                        |
| --------- | -------------------------------------------------- |
| `ft_atoi` | Converts a textual representation into an integer. |
| `ft_itoa` | Converts an integer into a string.                 |

Example:

```c
int number = ft_atoi("42");
```

The result is the integer `42`.

Example of the reverse conversion:

```c
char *text = ft_itoa(-42);

if (text)
{
    ft_putstr_fd(text, 1);
    free(text);
}
```

`ft_itoa` typically returns a dynamically allocated string. When you no longer need it, release the memory using `free`.

### 6. Memory Allocation

| Function    | Description                                         |
| ----------- | --------------------------------------------------- |
| `ft_calloc` | Allocates memory and initializes its bytes to zero. |

Example:

```c
int *numbers = ft_calloc(5, sizeof(int));

if (!numbers)
    return (1);

/* Use numbers... */

free(numbers);
```

Dynamically allocated memory should be released when it is no longer needed. Always handle allocation failures according to the function's contract.

### 7. Additional Functions

These functions combine simpler operations to make common string tasks easier.

| Function        | Description                                                          |
| --------------- | -------------------------------------------------------------------- |
| `ft_substr`     | Creates a substring from a starting position and length.             |
| `ft_strjoin`    | Creates a new string by joining two strings.                         |
| `ft_strtrim`    | Removes specified characters from the beginning and end of a string. |
| `ft_split`      | Splits a string into multiple strings using a delimiter.             |
| `ft_strmapi`    | Creates a new string by applying a function to each character.       |
| `ft_striteri`   | Applies a function to each character of the original string.         |
| `ft_putchar_fd` | Writes a character to a file descriptor.                             |
| `ft_putstr_fd`  | Writes a string to a file descriptor.                                |
| `ft_putendl_fd` | Writes a string followed by a newline.                               |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor.                              |

#### Example: `ft_strjoin`

```c
char *result = ft_strjoin("Hello, ", "42!");

if (!result)
    return (1);

ft_putstr_fd(result, 1);
free(result);
```

The result is `Hello, 42!`.

#### Example: `ft_split`

```c
char **words = ft_split("one two three", ' ');
```

The function splits the string into elements separated by spaces. In the classic implementation, the resulting array ends with a `NULL` pointer.

When you finish using the elements, free each string and then the array, according to your function's contract.

#### Example: `ft_substr`

```c
char *part = ft_substr("Programming", 0, 7);
```

The substring starts at index `0` and can contain up to seven characters: `Program`.

### 8. Linked Lists — Bonus

The classic bonus introduces linked lists, where each node contains data and a pointer to the next node.

A traditional structure looks like this:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

This definition should be included in your header if linked-list functions are part of your implementation.

| Function          | Description                                                         |
| ----------------- | ------------------------------------------------------------------- |
| `ft_lstnew`       | Creates a new node.                                                 |
| `ft_lstadd_front` | Adds a node to the beginning of the list.                           |
| `ft_lstsize`      | Counts the nodes in the list.                                       |
| `ft_lstlast`      | Returns the last node.                                              |
| `ft_lstadd_back`  | Adds a node to the end of the list.                                 |
| `ft_lstdelone`    | Deletes one node and frees its content using the provided function. |
| `ft_lstclear`     | Deletes and frees every node in the list.                           |
| `ft_lstiter`      | Applies a function to each node's content.                          |
| `ft_lstmap`       | Creates a new list by transforming each node's content.             |

These functions help develop an understanding of dynamic data structures and prepare for future projects that require flexible storage.

---

## 🛡️ Best Practices

When developing or using Libft, keep the following points in mind:

- **Validate pointers:** check that arguments are valid whenever the function's contract requires it.
- **Handle `malloc` failures:** never assume an allocation will always succeed.
- **Free allocated memory:** make sure every allocation has a clearly defined lifecycle.
- **Avoid out-of-bounds access:** check indices and memory-region sizes.
- **Respect function prototypes:** keep header declarations consistent with implementations.
- **Follow Norminette:** check the coding-style rules required by your version of the project.
- **Test edge cases:** empty strings, negative values, size limits, and failed allocations are all important.

## 🧪 Testing

To validate the library, start by rebuilding everything:

```bash
make fclean
make
```

Then test individual functions and check edge cases.

Validation checklist:

- [ ] All required functions compile.
- [ ] Function prototypes in `libft.h` match their implementations.
- [ ] The `libft.a` library is created in the project root.
- [ ] `make clean` removes `.o` files but keeps `libft.a`.
- [ ] `make fclean` removes `.o` files and `libft.a`.
- [ ] `make re` cleans and rebuilds the library.
- [ ] Functions that allocate memory handle failures correctly.
- [ ] Bonus functions, if implemented, are tested separately.
- [ ] The project follows the requirements of the assigned version.

External tests are useful, but they do not replace the official subject or guarantee a passing evaluation at 42.

## 💡 What I Learned

This project helps consolidate fundamental C programming concepts:

- Pointer and memory-address manipulation.
- Strings and arrays terminated by `'\0'`.
- Dynamic memory allocation and deallocation.
- Byte-level and memory-block operations.
- Functions and function pointers.
- Structures and linked lists.
- Compilation, object files, and static libraries.
- Build automation with Makefiles.

Libft provides a reusable foundation for other Common Core projects, provided the required functions are implemented and used according to their contracts.

## 🔗 References

- [42 School](https://42.fr/)
- [GNU Make Documentation](https://www.gnu.org/software/make/manual/)
- [GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [Linux man-pages](https://man7.org/linux/man-pages/)

---

*Project developed as part of the 42 School Common Core journey.*
