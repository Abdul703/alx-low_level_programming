#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: the link list pointer
 *
 * Return: the head node’s data (n), if head is not empty otherwise 0
*/
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
