#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - print the element of the link list
 *
 * @h: the link list
 *
 * Return: the number of element in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t bytes = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");
		current = current->next;
		bytes++;
	}
	return (bytes);
}
