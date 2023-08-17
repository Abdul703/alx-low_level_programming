#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print number from @n to 98
 *
 * @n: number to begin with
 *
 * Return: always 0 as success
 */
void print_to_98(int n)
{
int count = n;

while (count != 98)
{
printf("%d, ", count);
(n < 98) ? ++count : --count;
}
printf("98\n");
}
