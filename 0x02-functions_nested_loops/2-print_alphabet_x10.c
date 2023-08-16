#include "main.h"

/**
 * print_alphabet - print all lower case alphabet a-z x 10
 *
 * Return: void
 */
void print_alphabet(void)
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
