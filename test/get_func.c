#include "main.h"
#include <stdarg.h>
/**
 * get_op_func - function that selects the correct operation
 * @s: char operation
 *
 * Return: pointer to the correct func
 */
int (*get_func(const char *format))(va_list)
{
	pr_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
	};
	register int i;

	for (i = 0; p[i].type != NULL; i++)
	{
		if (*(p[i].type) == *format)
		{
			break;
		}
	}
	return (p[i].f);

}

