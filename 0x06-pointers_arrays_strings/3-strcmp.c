#include "main.h"

/**
 * _strcmp - compare 2 string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the result
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0')
{
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
	s1++;
	s2++;
}
return (*s1 - *s2);
}
