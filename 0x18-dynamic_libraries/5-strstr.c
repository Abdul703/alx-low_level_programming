#include "main.h"
#include <stddef.h>

/**
 * _strstr - locate a substring.
 *
 * @haystack: the string
 * @needle: substring
 *
 * Return: pointer to the location of the beginning string
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
	char *h = haystack;
	char *n = needle;

	/* Check if the substring matches starting from the current position */
	while (*n != '\0' && *h == *n)
	{
		h++;
		n++;
	}

	/* If needle reached the end, it's a match */
	if (*n == '\0')
	{
		return (haystack);
	}

	haystack++;
}
return (NULL);
}
