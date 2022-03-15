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
	char *arg;
	int i, sum = 0;

	arg = va_arg(args, char *);
if (arg == NULL)
	arg = ")LLun(";
for (i = 0; arg[i] != '\0'; i++)
	;
	i--;
	for (i = i; arg[i]; i--)
	{
		putchar(arg[i]);
		sum++;
	}
	return (sum);
}
