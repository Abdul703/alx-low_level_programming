#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - freed linked list from memory
 *
 * @head: the linked list to free
 *
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *current = head, *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
