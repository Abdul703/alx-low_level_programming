#include "main.h"

/**
 * print_times_table - print @n times table, starting with 0
 *
 * @n: number to print times table upto.
 *
 * Return: always 0 for success.
 */
void print_times_table(int n)
{
/* if n is less than 0 or greater 15: nothing happens */
if (n <= 15 && n >= 0)
{
	int num1, num2, product;

	for (num1 = 0; num1 <= n; ++num1)
	{
		_putchar('0');
		for (num2 = 1; num2 <= n; ++num2)
		{
			_putchar(',');
			_putchar(' ');

			product = num1 * num2;

			/* check if product is 3-digit number */
			if (product >= 100)
			{
				_putchar('0' + (product / 100));
				_putchar('0' + ((product % 100) / 10));
				_putchar('0' + (product % 10));
			}
			/* check if product is 2-digit number */
			else if (product > 9 && product < 100)
			{
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}

		}
		_putchar('\n');
	}
}
}
