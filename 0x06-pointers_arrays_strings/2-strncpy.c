#include "main.h"

/**
 * _strncpy - copying string with atmost @n character of 1st string
 *
 * @src: string to copy
 * @dest: destination of string copied
 * @n: atmost bytes for the @src to copy
 *
 * Return: pointer to the result
*/
char *_strncpy(char *dest, char *src, int n)
{
size_t i;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];

for ( ; i < n; i++)
	dest[i] = '\0';

return (dest);
}
