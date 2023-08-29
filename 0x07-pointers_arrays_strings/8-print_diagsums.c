#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 *
 * @a: the array
 * @size: the size of the array
 *
 * Return: void
*/
void print_diagsums(int *a, int size)
{

/* the sums and the length of the array */
int sum1 = 0, sum2 = 0, array_length = size * size;
/* initializing the starting index for the 1st and 2nd diagonal*/
int i = 0, j = size - 1;

while (i < array_length)
{
	/* 1st diagonal sum */
	sum1 += a[i];
	i += (size + 1);

	/* 2nd diagonal sum */
	sum2 += a[j];
	j += (size - 1);
}
printf("%d, %d\n", sum1, sum2);
}
