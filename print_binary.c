#include "main.h"
#include <stdarg.h>

/**
 * dec_to_binary - converts decimal to binary
 * @n: integer input
 *
 * Return: bynary number
 */
int dec_to_binary(va_list args)
{
	int n = va_arg(args, int);
	int binaryNum[32];
	int i = 0;

	while (n > 0) {

		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		binaryNum[i] = binaryNum[j];
		_putchar(binaryNum[i]);
	}
	return(sizeof(binaryNum));

}


