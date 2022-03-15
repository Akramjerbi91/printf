#include "main.h"
/**
 * _strlen - writes the character c to stdout
 * *@s: input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{int c = 0;
	while (s[c] != '\0')
		c++;
	return (c);
}

/**
 * print_revers - function that prints reversed string
 * @args: va_list
 *
 * Return: lenght
 */
int print_revers(va_list args)
{
	char *str;
	int i, sum = 0;

	str = va_arg(args, char *);

	for (i = 0; str[i]; i++)
		;
	i--;
	for (i = i; str[i]; i--)
	{
		_putchar(str[i]);
		sum++;
	}
	return (sum);
}
