#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: 1st string
 * @s2: 2nd string
 * @n: size to concatenate from 2nd string
 *
 * Return: the result
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int s1_len = 0, s2_len = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of the strings */
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	/* If n >= length of s2 then use the entire string s2 */
	if (n < s2_len)
		s2_len = n;

	/* allocating new memory */
	new_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (new_str == NULL)
		return (NULL);

	/* concatenate the 2 strings */
	for (i = 0; i < s1_len; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < s2_len; j++)
	{
		new_str[i + j] = s2[j];
	}
	new_str[i + j] = '\0';

	return (new_str);
}
