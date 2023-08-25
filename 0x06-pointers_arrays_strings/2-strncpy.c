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
int i = 0;

/* add the characters of 2nd string to the 1st */
while (*(src + i) != '\0' && i < n)
{
	*(dest + i) = *(src + i);

	i++;
}

/* add the null terminator if n is greater than the length of string to copy */
if (i < n)
	*(dest + i) = '\0';

return (dest);
}
