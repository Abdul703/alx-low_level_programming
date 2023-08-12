#include <stdio.h>

/**
 * main - Entry point
 *
 * print: all combination of 2 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;

/* loops to get the 3-digit number using ascii code */
for (i = 48; i < 58; i++)
{
	for (j = 48; j < 58; j++)
	{
		for (k = 48; k < 58; k++)
		{
			/* check if the number is not printed */
			if (i != j && j != k && k > j && j > i)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				/* check if its the last combination */
				if (i + j + k != 168)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');

return (0);
}
