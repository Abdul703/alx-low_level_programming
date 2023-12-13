#include "main.h"

/**
 * _puts - print a string with a newline
 *
 * @str: the string
 *
 * Return: void
 */
void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str);
++str;
}
_putchar('\n');
}
