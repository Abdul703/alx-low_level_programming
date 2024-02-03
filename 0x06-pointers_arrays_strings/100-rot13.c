#include "main.h"

/**
 * rot13 - encode leat letters on a string.
 *
 * @str: string to encode
 *
 * Return: pointer to the result string
 */
char *rot13(char *str)
{
	int i, j;
    char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
        for (j = 0; input[j] != '\0'; j++)
        {
            if (str[i] == input[j])
            {
                *(str + i) = output[j];
                break;
            }
            
        }
	}
	return (str);
}
