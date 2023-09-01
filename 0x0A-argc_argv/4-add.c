#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * isStringDigit - check if string is digit
 *
 * @str: string to check
 *
 * Return: bool
 */
bool isStringDigit(char *str)
{
while (*str != '\0')
{
	if (!isdigit(*str))
	{
		return (false);
	}
	str++;
}
return (true);
}

/**
 * main - add numbers
 *
 * @argc: count arguments
 * @argv: string arguments
 *
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc > 1)
{
	for (i = 1; i < argc; ++i)
	{
		if (isStringDigit(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
}
else
{
	printf("0\n");
}
return (0);
}
