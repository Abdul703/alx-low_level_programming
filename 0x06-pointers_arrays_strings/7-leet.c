#include "main.h"

/**
 * leet - encode leat letters on a string.
 *
 * @str: string to encode
 *
 * Return: pointer to the result string
 */
char *leet(char *str)
{
	char *leatUpper = "AEOTL";
	char *leatLower = "aeotl";
	char *leatValue = "43071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leatLower[j] != '\0'; j++)
		{
			if (str[i] == leatLower[j] || str[i] == leatUpper[j])
			{
				*(str + i) = leatValue[j];
			}
		}
	}
	return (str);
}
