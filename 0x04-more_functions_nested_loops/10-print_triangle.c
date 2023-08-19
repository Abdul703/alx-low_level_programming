#include "main.h"

/**
 * print_triangle - printing triangle using '#'
 *
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
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
		for (j = i; j < size - 1; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i + 1; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
}
