#include <stdio.h>
#include "main.h"

/**
 * print_array - printing array from 1st element to nth
 *
 * @a: the array
 * @n: the number of element to be printed
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
	printf("%d", *(a + i));

	if (i + 1 != n)
		printf(", ");
}
putchar('\n');
}
