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
int print_revers(va_list args)  
{  
    // declare variable
	char *arg = va_arg(args, char *);
    int i, len, temp;  
    len = _strlen(arg); // use strlen() to get the length of str string  
      
    // use for loop to iterate the string   
    for (i = 0; i < len/2; i++)
    {  
        // temp variable use to temporary hold the string  
        temp = arg[i];  
        arg[i] = arg[len - i - 1];  
        arg[len - i - 1] = temp;  
    }
	return (len);
}