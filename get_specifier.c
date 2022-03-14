#include "main.h"
#include <stdarg.h>
/**
 * check_for_specifiers - function that selects the correct specifier
 * @format: char pointer specifier
 *
 * Return: pointer to the correct func
 */
int (*check_for_specifiers(const char *format))(va_list)
{
	register int i;
	pr_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
		{"%%", print_percentage}
	};

	for (i = 0; p[i].type != NULL; i++)
	{
		if (*(p[i].type) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}