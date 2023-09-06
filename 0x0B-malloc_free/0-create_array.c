#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char
 *
 * @size: size of the array.
 * @c: initializing char
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *char_array;
	unsigned int i;

	/* check if size is zero */
	if (size == 0)
		return (NULL);

	/**
	 * dynamically allocate memory for the array
	 * and check if not fail
	 */
	char_array = malloc(sizeof(char) * size);
	if (char_array == NULL)
		return (NULL);

	/* initialize the array */
	for (i = 0; i < size; i++)
	{
		char_array[i] = c;
	}

	return (char_array);
}
