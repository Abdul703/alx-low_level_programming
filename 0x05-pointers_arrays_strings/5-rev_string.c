#include "main.h"

/**
 * rev_string - reverse string using pointer
 *
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
int i = 0;

/* getting the last index */
while (*s != '\0')
{
	i++;
	s++;
}
_putchar(i + '0');

/* printing the string in reverse */

}
