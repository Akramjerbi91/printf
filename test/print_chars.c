#include "main.h"
#include <stdarg.h>
/**
 * print_char - prints a character
 * @args: list of variadic args
 * Return: void
 */
int print_char(va_list args)
{
	int c = va_arg(args, int);
	_putchar(c);
	return (1);
}
/**
 * print_string - prints a string
 * @separator: separator
 * @args: list of variadic args
 * Return: void
 */
int print_string(va_list args)
{
	char *arg = va_arg(args, char *);
int i;
	if (arg == NULL)
	{
		arg = "(Nill)";
	}
	for (i = 0; arg[i] != '\0'; i++)
	{
		_putchar(arg[i]);
	}
	return (i);
}
