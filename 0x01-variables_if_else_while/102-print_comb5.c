#include <stdio.h>

/**
 * main - Entry point
 *
 * print: all combination of 2 2-digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k, l;

/* loops to get the 1st 2-digit number using ascii code */
for (i = 48; i < 58; i++)
{
	for (j = 48; j < 58; j++)
	{
		/* loop to get the 2nd 2-digit number using ascii code */
		for (k = 48; k < 58; k++)
		{
			for (l = 48; l < 58; l++)
			{
				/* check if  the combination is not printed */
				if (i + j != k + l && i + j < k+l)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);

					/* check if the combination is the last one */
					if (i + j + k != 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
}
putchar('\n');

return (0);
}
