#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: the string
 * @accept: characters to search
 *
 * Return: pointer to the location of the 1st occurence of the char or Null
 * if not found
*/
char *_strpbrk(char *s, char *accept)
{
char *str;
while (*s != '\0')
{
	/* loop through the set of bytes to search the occurence */
	str = accept;
	while (*str != '\0')
	{
		if (*s == *str)
		{
			return (s);
		}
		str++;
	}
	s++;
}
return (NULL);
}
