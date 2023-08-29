#include "main.h"

/**
 * _strspn - getting the length of a prefix substring
 *
 * @s: string to search
 * @accept: substring to search with
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
char *str;
unsigned int count = 0;

while (*accept != '\0')
{
	/* loop through the set of bytes to search the occurence */
	str = s;
	while (*str != '\0')
	{
		if (*accept == *str)
		{
			count++;
			break;
		}
		str++;
	}
	accept++;
}
return (++count);
}
