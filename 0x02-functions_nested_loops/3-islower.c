#include "main.h"

/**
 * _islower - checks for lower case character
 *
 * @c: character to check
 *
 * Return: 1 if @c is lower else 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
