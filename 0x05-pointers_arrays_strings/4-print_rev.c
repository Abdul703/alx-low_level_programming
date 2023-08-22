#include "main.h"
#include <stdio.h>

/**
 * print_rev - printing string in reverse
 *
 * @s: the string to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
char *first_char_location = s;

/* getting the last character */
while (*s != '\0')
{
	s++;
}

/* printing the string in reverse */
while (s >= first_char_location)
{
	_putchar(*(s - 1));
	--s;
}
_putchar('\n');
}
