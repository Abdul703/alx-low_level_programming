#include "lists.h"
#include <stddef.h>

/**
 * list_len - find numbers of elements in a linked list
 *
 * @h: the link list
 *
 * Return: the size of the list
 */
size_t list_len(const list_t *h)
{
	list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
