#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * sum_dlistint - find sum of a list element
 *
 * @head: head node of the list
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	unsigned int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
