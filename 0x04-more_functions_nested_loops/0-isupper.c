#include "main.h"

/**
 * _isupper - check upper case character
 *
 * @c: character to check
 *
 * Return: 1 if @c is uppercase else 0
 */
int _islower(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
