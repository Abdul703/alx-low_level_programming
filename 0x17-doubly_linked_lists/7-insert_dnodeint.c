#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - insert new node at a given index to a list
 *
 * @h: the head node of the list
 * @idx: index to add node
 * @n: value of the node
 *
 * Return:  returns the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	unsigned int current_idx = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (*h == NULL || new_node == NULL || h == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (idx == 0) /* Handle inserting at the beginning */
	{
		free(new_node);
		return (add_dnodeint(h, n));
	}

	while (current)
	{
		if (current_idx == idx)
		{
			new_node->n = n;
			new_node->prev = current->prev;
			new_node->next = current;
			if (current->prev != NULL)
				current->prev->next = new_node;
			current->prev = new_node;
			return (new_node);
		}
		current_idx++;
		current = current->next;
	}

	/* Handle inserting at the end */
	if (current_idx == idx)
	{
		free(new_node);
		return (add_dnodeint_end(h, n));
	}
	free(new_node);
	return (NULL);
}

