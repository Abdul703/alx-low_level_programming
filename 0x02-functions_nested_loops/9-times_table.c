#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: always 0 as success
 */
void times_table(void)
{
int num1, num2, product;

for (num1 = 0; num1 < 10; ++num1)
{
	_putchar('0');

	for (num2 = 1; num2 < 10; ++num2)
	{
		_putchar(',');
		_putchar(' ');

		product = num1 * num2;

		/*
		 * check if product is 2-digit number,
		 * if yes, then print the 2-digit
		 */
		if (product > 9 && product < 100)
		{
			_putchar('0' + (product / 10));
			_putchar('0' + (product % 10));
		}
		else
		{
			_putchar(' ');
			_putchar('0' + product);
		}

	}
	_putchar('\n');
}
}
