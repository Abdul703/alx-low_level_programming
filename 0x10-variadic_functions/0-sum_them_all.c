#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all the function parameters
 *
 * @n: number of passed arguments
 *
 * Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, value;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		sum += value;
	}
	va_end(args);
	return (sum);
}
