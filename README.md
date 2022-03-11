Printf
11th March 2022

OVERVIEW
Create   a printf clone 

GOALS
Write a function that produces output according to a format.
Handle the conversion specifiers d and i.
Create a man page for your function.
Handle the custom conversion specifiers b that converts unsigned int to binary.
Handle the conversion specifiers u, o, x, X.
Use a local buffer of 1024 chars in order to call write as little as possible.
Handle the following custom conversion specifier: S : prints the string, Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).
Handle the conversion specifier p.
Handle the flag characters for non-custom conversion specifiers: +, space, #
Handle the length modifiers for non-custom conversion specifiers l , h for d, i, u, o, x, X.
Handle the field width for non-custom conversion specifiers.
Handle the precision for non-custom conversion specifiers.
Handle the 0 flag character for non-custom conversion specifiers.
Handle the - flag character for non-custom conversion specifiers.
Handle the custom conversion specifier r that prints a string in reverse.

SPECIFICA TIONS
This project is a pear collaboration to produce a clone of printf.

Team members:
Akram Jerbi
Khawla Daouay
# printf
