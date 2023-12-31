#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: the head of the list
 *
 * Return: the number of element in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		length += 1;
	}
	return (length);
}
