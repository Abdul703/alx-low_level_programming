#include "main.h"

/**
 * print_squre - printing square using #
 *
 * @size: size of the square
 *
 * Return: void
 */
void print_squre(int size)
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
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
}
