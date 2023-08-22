#include "main.h"

/**
 * _strcpy - copy a string pointed to a variable to another variable
 *
 * @src: the sring pointer to copy
 * @dest: the string pointer to copy to
 *
 * Return: pointer to @dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (*src != '\0')
{
	dest[i] = *src;

	i++;
	src++;
}
dest[i] = '\0';

return (dest);
}
