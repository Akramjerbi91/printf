#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdarg.h>
#include <stdio.h>
int (*check_for_specifiers(const char *format))(va_list);
int _printf(const char * const format, ...);
int _putchar(char c);
int print_string(va_list args);
int print_char(va_list args);
int print_int(va_list args);
int print_percent(va_list args);
void _puts(char *str);
int _strlen(char *s);
int print_revers(va_list args);
int print_Rot13(va_list args);
int dec_to_binary(va_list args);

/**
 * struct printer - Struct printer
 * @type: The types
 * @f: The function associated
 */
typedef struct printer
{
	char *type;
	int (*f)(va_list);
} pr_t;
#endif
