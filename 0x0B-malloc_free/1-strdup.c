#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: striing to copy
 *
 * Return: pointer to the copied location
*/
char *_strdup(char *str)
{
	int str_len = 0, i;
	char *str_dup = malloc(sizeof(char) * str_len);

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[str_len] != '\0')
	{
		str_len++;
	}

	if (str_dup == NULL)
		return (NULL);

	for (i = 0; i < str_len; i++)
	{
		str_dup[i] = str[i];
	}
	return (str_dup);
}
