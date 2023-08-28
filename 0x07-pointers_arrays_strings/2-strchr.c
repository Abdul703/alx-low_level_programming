#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string
 * @c: character to search
 *
 * Return: pointer to the location of the 1st
 * occurence of the char or Null if not found
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
	if (*s == c)
	{
		return (s);
	}
	s++;
}
return (NULL);
}
