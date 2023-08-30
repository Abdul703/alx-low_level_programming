#include "main.h"

/**
 * _sqrt - recursive to check for square root
 *
 * @n: an integer to check
 * @d: the divisor
 *
 * Return: -1 if no natural square root, else, the square root of the number
*/
int _sqrt(int n, int d)
{
if (d == 0)
	return (-1);
else if (d * d == n)
	return (d);
return (_sqrt(n, (d - 1)));
}

/**
 * _sqrt_recursion - find square root of an integer
 *
 * @n: an integer to check
 *
 * Return: -1 if no natural square root, else, the square root of the number
*/
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
else if (n == 1)
	return (1);
else if (n == 0)
	return (0);
return (_sqrt(n, n / 2));
}
