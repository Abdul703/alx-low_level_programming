#include "main.h"

/**
 * _strcat - concatenating 2 strings
 *
 * @src: string to concatenate with
 * @dest: string to concatenate to
 *
 * Return: pointer to the result
*/
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

/* count the character of 1st string */
while (*(dest + i) != '\0')
{
	i++;
}

/* add the characters of 2nd string to the 1st */
while (*(src + j) != '\0')
{
	*(dest + i) = *(src + j);

	i++;
	j++;
}

*(dest + i) = '\0'; /* add the null terminator */

return (dest);
}
