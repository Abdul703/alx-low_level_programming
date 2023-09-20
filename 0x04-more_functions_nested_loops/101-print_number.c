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
	int divisor = 1, digit;
	unsigned int num = n;

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
		num *= -1;
	}

	/* get highest divisor */
	while (num / divisor >= 10)
		divisor *= 10;

	/* printing the numbers */
	while (divisor > 0)
	{
		digit = (num / divisor) % 10;
		_putchar(digit + '0');
		divisor /= 10;
	}
}
