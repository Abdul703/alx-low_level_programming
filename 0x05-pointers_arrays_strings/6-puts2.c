#include "main.h"

/**
 * puts2 - printing every other character of a string starting with the 1st
 *
 * @str: string to reverse
 *
 * Return: void
 */
void puts2(char *str)
{
char *start = str, *end = str;

/* getting the last index */
while (*end != '\0')
{
	end++;
}

while (start < end && *start != '\0')
{

	_putchar(*start);
	start += 2;
}
_putchar('\n');
}
