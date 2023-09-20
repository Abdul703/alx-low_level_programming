#include "main.h"

/**
 * print_number - print an integer
 *
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	int divisor = 1, num;

	/* handle 0 */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* get highest divisor */
	while (n / divisor >= 10)
		divisor *= 10;

	/* printing the numbers */
	while (divisor > 0)
	{
		num = (n / divisor) % 10;
		_putchar(num + '0');
		divisor /= 10;
	}
}
