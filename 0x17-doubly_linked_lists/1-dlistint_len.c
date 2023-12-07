#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - count the elements of a dlistint_t list.
 *
 * @h: the head of the list
 *
 * Return: the number of element in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		length += 1;
	}
	return (length);
}
