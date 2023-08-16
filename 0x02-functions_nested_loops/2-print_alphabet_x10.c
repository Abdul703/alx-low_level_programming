#include "main.h"

/**
 * print_alphabet_x10 - print all lower case alphabet a-z x 10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
}
