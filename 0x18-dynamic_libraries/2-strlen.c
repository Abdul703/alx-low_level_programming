#include "main.h"

/**
 * _strlen - find the length of a string
 *
 * @s: the string
 *
 * Return: the lenth of string @s
 */
int _strlen(char *s)
{
int length = 0, i = 0;

while (s[i] != '\0')
{
	++length;
	++i;
}
return (length);
}
