#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * sum_listint - find sum of a list element
 *
 * @head: head node of the list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
