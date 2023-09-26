#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *first_node;
	int n;

	if (*head == NULL)
		return (0);

	first_node = *head;
	n = first_node->n;
	*head = (*head)->next;
	free(first_node);

	if (*head == NULL)
		return (0);

	return (n);
}
