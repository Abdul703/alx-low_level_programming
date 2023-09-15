#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_string - check if str is null
 *
 * @str: string to check
 *
 * Return: (nil) if NULL, otherwise the string
 */
char *print_string(char *str)
{
	if (str == NULL)
		return ("(nil)");
	return (str);
}

/**
 * print_all -prints anything that is pass as arg to function
 *
 * @format: type of the argument to print
 *
 * Return: void
*/
void print_all(const char * const format, ...)
{
	const char *format_ptr = format;
	va_list args;
	int flag = 0;

	va_start(args, format);

	while (*format_ptr != '\0')
	{
		switch (*format_ptr)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				flag = 1
				break;
			case 's':
				printf("%s", print_string(va_arg(args, char*)));
				flag = 1;
				break;
			default:
				flag = 0;
				break;
		}
		format_ptr++;
		if (*format_ptr != '\0' && flag == 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
