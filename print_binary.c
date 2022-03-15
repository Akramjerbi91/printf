#include "main.h"
#include <stdarg.h>
/**
 * dec_to_binary - converts decimal to binary
 * @args: integer input
 *
 * Return: bynary number
 */
int dec_to_binary(va_list args)
{
	int n = va_arg(args, int);
	int binaryNum[32];
	int i = 0;
	int j = 0;

	while (n > 0)
	{

		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
	_putchar(binaryNum[j] + '0');
	}
	return (i);
}


