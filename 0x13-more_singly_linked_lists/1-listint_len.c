#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * @h: the link list
 *
 * Return: the number of element in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t bytes = 0;

	while (current != NULL)
	{
		current = current->next;
		bytes++;
	}
	return (bytes);
}
