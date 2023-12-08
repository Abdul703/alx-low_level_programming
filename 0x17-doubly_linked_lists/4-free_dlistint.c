#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - freed linked list from memory
 *
 * @head: the linked list to free
 *
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	if (head == NULL)
	{
		exit(EXIT_SUCCESS);
	}

	while (current->next != NULL)
	{
		current = current->next;
		free(current->prev);
	}
	free(current);
}
