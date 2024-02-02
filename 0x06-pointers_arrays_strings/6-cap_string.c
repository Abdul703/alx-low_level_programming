#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: string to capitalize
 *
 * Return: pointer to the string
 */
char *cap_string(char *str)
{
	char *deli = " \n\t.,;?{}\"()!";
	int i, j;

	/* capitalize the 1st letter */
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		*str -= 32;
	}

	/* loop through the delimeter and capitalize the next letter*/
	for (i = 1; str[i] != '\0'; i++)
	{
		for (j = 0; deli[j] != '\0'; j++)
		{
			if (str[i - 1] == deli[j] && (str[i] >= 'a' && str[i] <= 'z'))
			{
				*(str + i) -= 32;
			}
		}
	}
	return (str);
}
