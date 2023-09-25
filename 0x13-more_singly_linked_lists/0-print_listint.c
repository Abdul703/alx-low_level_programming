#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - print the element of the link list
 *
 * @h: the link list
 *
 * Return: the number of element in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t bytes = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		bytes++;
	}
	return (bytes);
}
