#include <stdio.h>

/**
 * main - Entry point
 *
 * print: all combination of 2 digits numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int tens, unit;

/* loop to get tens's value of digit using ascii code */
for (tens = 48; tens < 58; tens++)
{
	/* loop to get unit's value of digit using ascii code */
	for (unit = 48; unit < 58; unit++)
	{
		/**
		  *check if the digit combination is
		  *not printed and not the same
		  */
		if (tens != unit && unit > tens)
		{
			putchar(tens);
			putchar(unit);
			/* check if the digit is not the last digit */
			if (tens + unit != 113)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');

return (0);
}
