#include <stdio.h>

/**
 * main - Entry point
 *
 * print: digits 0 - 9, seperated by coma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 48; i < 57; i++)
{
	putchar(i);
	putchar(',');
	putchar(' ');
}
putchar('9');

return (0);
}
