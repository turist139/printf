*This project has been created as part of the 42 curriculum by ganzhgle*

# ft_printf

## Description
`ft_printf` is the second project in the 42 curriculum. The goal is to recreate the behavior of the standard C library function `printf`. 
This project introduces the concept of **variadic functions** in C (using `<stdarg.h>`), teaching how to handle an unknown number of arguments of varying types. It also reinforces string parsing, modular code organization, and integrating previously written libraries (`libft`).

## Supported Conversions
The function successfully parses and prints the following format specifiers:

- `%c` : Prints a single character.
- `%s` : Prints a string (as defined by the common C convention).
- `%p` : Prints a `void *` pointer argument in hexadecimal format.
- `%d` : Prints a decimal (base 10) number.
- `%i` : Prints an integer in base 10.
- `%u` : Prints an unsigned decimal (base 10) number.
- `%x` : Prints a number in hexadecimal (base 16) lowercase format.
- `%X` : Prints a number in hexadecimal (base 16) uppercase format.
- `%%` : Prints a literal percent sign.

## Architecture & Libft Integration
This project is built on top of my custom `libft` library. The `Makefile` is designed to compile the `libft` source files first, and then archive both the `libft` object files and the `ft_printf` object files into a single static library named `libftprintf.a`.

## Instructions

To compile the library, run the following command in the root directory:

```bash
make
```

This will generate the `libftprintf.a` static library file. You can then link this library to your own projects.

**Other Commands:**
- `make clean`: Removes intermediate object files (`.o`), including those in the `libft` directory.
- `make fclean`: Removes object files and the final `libftprintf.a` library.
- `make re`: Performs a clean re-compilation of the entire project.

## Resources

**References**
- Linux Man Pages: The primary reference for the behavior of standard libc `printf` (e.g., `man 3 printf`) and the `<stdarg.h>` macros.

**AI Usage**
AI tools (specifically Gemini) were utilized during the development of this project for:
- Researching the mechanics of variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`) and memory addressing (32-bit vs 64-bit pointers).
- Creating edge-case tests for the main testing file to match the original `printf` behavior.
- Drafting this README file.