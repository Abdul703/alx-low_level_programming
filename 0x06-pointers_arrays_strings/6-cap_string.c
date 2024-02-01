#include "main.h"

/**
 * string_toupper - convert string to uppercase
 *
 * @str: string to convert
 *
 * Return: pointer to the string
*/
char *cap_string(char *)
{
	char *temp = str;

    while (*temp != '\0')
    {
        if (*temp >= 'a' && *temp <= 'z')
        {
            *temp -= 32;
        }
        temp++;
    }
    return (str);
}
