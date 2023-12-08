#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: the head node
 * @index: index to find node
 *
 * Return:  returns the nth node of a listint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int current_index = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		if (current_index == index)
		{
			return (current);
		}
		current = current->next;
		current_index++;
	}
	return (NULL);
}
