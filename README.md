
# ft_printf

The ft_printf project of the 42 Curriculum! In this project, you will implement your own version of the printf function, which is a powerful and widely-used function in the C programming language for printing formatted output.

# Project Overview
The ft_printf function takes a format string as its first argument, which specifies the type and format of the output that should be printed. The format string may contain conversion specifiers, which begin with the % character, and are followed by one or more characters that specify the type and format of the output.

Our task is to implement a function that can handle a variety of conversion specifiers, including strings, characters, integers, and floating point numbers .

We must also handle certain special characters, such as the backslash character (\\), which may be used to specify special characters or escape sequences.

# Implementation Details
- Your ft_printf function should have the following prototype:
```
int ft_printf(const char *format, ...);
````

- The format argument is a string that specifies the output format, and may contain one or more conversion specifiers.

The function should return the number of characters printed (excluding the null terminator), or a negative value if an error occurred.


You should also handle the following conversion specifiers:




## The specifiers

| Specifier            | Output                                                             |
| ----------------- | ------------------------------------------------------------------ |
| % | A literal % character|
| c | A single character|
| s | A string of characters|
| d | A signed decimal integer|
| i | A signed decimal integer|
| u | An unsigned decimal integer|
| p | An octal integer|
| x | A hexadecimal integer (lowercase)|
| X | A hexadecimal integer (uppercase)|
| p | A pointer address in hexadecimal|


## Deployment
- first create a main.c file wchich we will call our printf function
- To deploy this project run the following commands

```bash
  make all
  cc -Wall -Werror -Wextra libftprintf.a main.c
```

# Conclusion
Implementing my own version of the printf function was a challenging and rewarding project which did helped me alot to take new concept of C programming such as variadic function .
## Ressources

 - [ft_printf Tester](https://github.com/Tripouille/printfTester)
 - [helpful videos](https://www.youtube.com/watch?v=dG8PV6xqm4s&list=PLSXWqRZylkM_Ht7N5YgO-fbRIiL1_6M-k) 


## Authors

- [@hkoutar7](https://github.com/hkoutar7)


## Contributing

We welcome contributions to ft_printf! If you find a bug or want to suggest a new feature, please open an issue on GitHub. If you want to contribute code, please create a pull request with your changes.

