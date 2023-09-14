#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - Sums the parameters
 *
 *@n: The first variadic argument
 *
 *Return: The result of the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int a;
	unsigned int sumarg;

	a = sumarg = 0;

	va_start(args, n);
	if (n == 0)
		return (0);
	while (a < n)
	{
		sumarg += va_arg(args, int);
		a++;
	}

	va_end(args);
	return (sumarg);
}
