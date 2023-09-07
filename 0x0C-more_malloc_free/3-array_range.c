#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers given minimum and maximum value
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the range of arrays
 */
int *array_range(int min, int max)
{
	int size, *ptr;

	/* check if min value is not higher, then compute the size */
	if (min > max)
		return (NULL);
	size = (max - min + 1) * sizeof(int);

	/* allocate memory */
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);

	/* initialize values */
	for (; min <= max; min++)
	{
		ptr[min] = min;
	}
	return (ptr);
}
