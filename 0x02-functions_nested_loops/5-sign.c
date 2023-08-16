#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: the number to check sign
 *
 * Return: 1 if @n is positive, 0 if @n zero and -1 if @n is
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
