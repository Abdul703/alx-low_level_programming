#include "main.h"

/**
 * string_toupper - convert string to uppercase
 *
 * @str: string to convert
 *
 * Return: pointer to the string
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
