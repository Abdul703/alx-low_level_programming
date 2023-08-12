#include <stdio.h>

/**
 * main - Entry point
 *
 * print: all digits and alphabet of hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

/*print  numbers 0-9 using ascii code*/
for (i = 48; i < 58; i++)
	putchar(i);

/*print  a-f using ascii*/
for (i = 97; i < 103; i++)
	putchar(i);

putchar('\n');
return (0);
}
