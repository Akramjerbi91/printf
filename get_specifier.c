#include "main.h"
#include <stdarg.h>
/**
 * check_for_specifiers - function that selects the correct specifier
 * @format: char pointer specifier
 *
 * Return: pointer to the correct func
 */
int check_for_specifiers(const char format, va_list args)
{
 int i = 0, count = 0;
	pr_t p[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
		{'%', print_percent}
	};

	while (p[i].type != 0)
	{
		if (p[i].type == format)
		{
			count = count + p[i].f(args);
			return (count);
		}
		i++;
	}
	return (0);
}