#include "function_pointers.h"

/**
 * int_index - executes a function given as a parameter on each element
 * of an array to search for an integer
 *
 * @array: array of integers
 * @size: size of the array
 * @cmp: function to call
 *
 * Return: index of the first element that does not return 0 or -1 if otherwise
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}

	/* one of the argument is invalid */
	return (-1);
}
