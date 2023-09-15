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

	va_start(args, format);

	while (*format_ptr != '\0')
	{
		switch (*format_ptr)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				printf("%s", print_string(va_arg(args, char*)));
				break;
			default:
				break;
		}
		format_ptr++;
		if (*format_ptr != '\0' &&
			(*format_ptr == 's' || *format_ptr == 'i' ||
			*format_ptr == 'c' || *format_ptr == 's'))
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
