#include "main.h"

/**
 * puts_half - printing the last half of a string
 *
 * @str: string to print last half
 *
 * Return: nothing
 */
void puts_half(char *str)
{
int length_of_the_string = 0, n;
char *str_copy = str;

/* getting the length of the string */
while (*str_copy != '\0')
{
	str_copy++;
	length_of_the_string++;
}
length_of_the_string--;

/* compute the half of the string */
if (length_of_the_string % 2 == 0)
	n = length_of_the_string / 2;
else
	n = (length_of_the_string - 1) / 2;
n++;

/* printing the last half*/
while (n < length_of_the_string)
{
	_putchar(*(str + n));
	n++;
}
_putchar('\n');
}
