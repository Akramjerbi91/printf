#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdarg.h>

int _print(const char * const format, ...);
int _putchar(char c);
int print_string(va_list args);
int print_char(va_list args);
void _puts(char *str);

/**
 * struct printer - Struct printer
 * @type: The types
 * @f: The function associated
 */
typedef struct printer
{
	char *type;
	int (*f)(va_list args);
} pr_t;
#endif
