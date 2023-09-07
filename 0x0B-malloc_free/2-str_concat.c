#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: the result
*/
char *str_concat(char *s1, char *s2)
{
	char *new_str, *new_str_start;
	int s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of the string */
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	new_str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (new_str == NULL)
		return (NULL);

	new_str_start = new_str;
	while (*s1 != '\0')
	{
		*new_str = *s1;
		new_str++;
		s1++;
	}

	while (*s2 != '\0')
	{
		*new_str = *s2;
		new_str++;
		s2++;
	}
	*new_str = '\0';

	return (new_str_start);
}
