#include "main.h"

/**
 * print_diagonal - printing diagonal using /
 *
 * @size: size of the diagonal
 *
 * Return: void
 */
void print_diagonal(int size)
{
int i, j;

if (size <= 0)
{
	_putchar('\n');
}
else
{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
}
