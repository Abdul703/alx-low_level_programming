#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_dnodeint_at_index - delete node from given index
 *
 * @head: the head node
 * @index: index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	/* Handle deletion at the beginning (index 0) */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (0);
	}

	/* Traverse to the specified index or the end of the list */
	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	/* Update pointers to skip the node to be deleted */
	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (0);
}
