#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers pass in arguments
 *
 * @separator: string to be printed in between
 * @n: numbers of arguments pass in
 *
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && (n - 1 != i))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
