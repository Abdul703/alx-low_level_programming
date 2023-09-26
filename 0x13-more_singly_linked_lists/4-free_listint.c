#include <stdlib.h>
#include "lists.h"


/**
 * free_listint - freed linked list from memory
 *
 * @head: the linked list to free
 *
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *current = head, *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
