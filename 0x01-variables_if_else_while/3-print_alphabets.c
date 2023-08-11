#include <stdio.h>

/**
 * main - Entry point
 *
 * print: alphabets in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

/*print  the lower case using ascii code*/
for (i = 97; i < 123; i++)
	putchar(i);

/*print  the uppercase using ascii code*/
for (i = 65; i < 91; i++)
	putchar(i);

putchar('\n');
return (0);
}
