#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings pass in arguments
 *
 * @separator: string to be printed in between
 * @n: strings of arguments pass in
 *
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char*);
			if (str == NULL)
				str = "(nil)";

			printf("%s", str);
			if (separator != NULL && i + 1 != n)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(args);
}
