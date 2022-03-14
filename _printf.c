#include "main.h"
/**
 * _printf - print all (printf reecreation)
 * @format: format specifier
 * Return: count
 */
int _printf(const char *format, ...)
{
int i, count = 0;
	va_list args;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);
	if (args == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			while (format[i] == ' ')
				i++;
			f = check_for_specifiers(&format[i]);
			if (f == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
			else
				count += f(args);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
