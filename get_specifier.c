#include "main.h"
#include <stdarg.h>
/**
 * check_for_specifiers - function that selects the correct specifier
 * @format: char pointer specifier
 * Return: pointer to the correct func
 */

int (*check_for_specifiers(const char *format))(va_list)
{
	int i;

	pr_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
		{"r", print_revers},
		{"%", print_percent},
		{NULL, NULL}
	};

	for (i = 0; p[i].type != NULL; i++)
	{
		if (*format == *(p[i].type))
		{
			break;
		}
	}
	return (p[i].f);
}
