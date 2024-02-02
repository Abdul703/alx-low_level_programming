#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: string to capitalize
 *
 * Return: pointer to the string
 */
char *leet(char *str)
{
	char *leatUpper = "AEOTL";
	char *leatLower = "aeotl";
	char *leatValue = "43071";
	int i, j;

	/* l*/
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
