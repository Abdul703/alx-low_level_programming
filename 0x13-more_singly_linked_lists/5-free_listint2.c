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
	listint_t *current = *head, *next;

	if (!head)
		return;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
