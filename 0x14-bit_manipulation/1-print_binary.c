#include "main.h"

/**
 * print_binary - print binary of a given decimal number using rrecursion
 *
 * @n: decimal number
 *
 * Return: void
*/
void print_binary(unsigned long int n)
{
	/* Right-shift n by 1 to examine the next bit */
	if (n > 1)
		print_binary(n >> 1);

	/* Print '1' if the least significant bit is 1, '0' otherwise */
	_putchar((n & 1) ? '1' : '0');
}
