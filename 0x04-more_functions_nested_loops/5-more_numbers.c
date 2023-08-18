#include "main.h"

/**
 * more_numbers - print 0 to 14 x 10
 *
 * Return: void
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
	for (j = 0; j <= 14; j++)
	{
		/* check if number is 2 digit number */
		if (j < 10)
		{
			_putchar('0' + j);
		}
		else
		{
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
		}
	}
	_putchar('\n');
}
}
