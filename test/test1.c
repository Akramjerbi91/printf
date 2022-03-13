#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * print_all - prints all parameters
 * @format: format for parameters
 * Return: void
 */
int _print(const char *const format, ...)
{
	va_list args;

	pr_t printer[] = {{"c", print_char},
					  {"s", print_string}
					  };
	int i, j = 0, count = 0;

	va_start(args, format);
	if ( format == NULL)
	return (-1);

	while (format[i])
	{
		if (format[i] == '%')
			return (-1);
		if (format[i + 1] == '%')
			_putchar('%' + 0);
			return (1);
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		j = 0;
		while (j < 2)
		{
			if (format[i] == *printer[j].type)
			{
				printer[j].f( args);
			}
			j++;
			count++;
		}
		i++;
	}
	va_end(args);
	return(count);
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
/**
 * print_char - prints a character
 * @separator: separator
 * @args: list of variadic args
 * Return: void
 */
int print_char(va_list args)
{
	int c = va_arg(args, int);
	_putchar(c);
	return (1);
}
