#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of elements
 * @size: size of of element
 *
 * Return: pointer to the result
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
