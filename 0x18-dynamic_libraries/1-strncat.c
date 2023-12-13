#include "main.h"

/**
 * _strncat - concatenating 2 strings with atmost @n character of 1st string
 *
 * @src: string to concatenate with
 * @dest: string to concatenate to
 * @n: atmost bytes for the @src to concatenate
 *
 * Return: pointer to the result
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

/* count the character of 1st string */
while (*(dest + i) != '\0')
{
	i++;
}

/* add the characters of 2nd string to the 1st */
while (*(src + j) != '\0' && j < n)
{
	*(dest + i) = *(src + j);

	i++;
	j++;
}

*(dest + i) = '\0'; /* add the null terminator */

return (dest);
}
