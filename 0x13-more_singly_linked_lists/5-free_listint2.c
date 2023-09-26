#include <stdlib.h>
#include "lists.h"


/**
 * free_listint2 - freed linked list from memory and set the head to null
 *
 * @head: the linked list to free
 *
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (*head == NULL || head == NULL)
		return;
	else
		current = (*head)->next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
