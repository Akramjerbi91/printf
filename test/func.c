#include<unistd.h>
/**
 * _strlen - writes the character c to stdout
 * *@s: input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{int i = 0;
	while (*s != '\0')
	i++;
	return (i);
}
/**
 * write_char - write a char
 *
 * @c: input
 */
char write_char(const char c)
{
write(1,"&c",1);
}
/**
 * write_string - write a string
 *
 * @s: input
 */
char *write_string(const char *s)
{
	write(1,s,_strlen);
}
