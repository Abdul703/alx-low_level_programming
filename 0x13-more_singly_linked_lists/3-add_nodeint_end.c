#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: pointer to the list
 * @n: new integer
 *
 * Return: address of the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;

	/* create new node */
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	/* if the list is empty, set the head to the new node */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* get the last element and linked it with the new node*/
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;

	return (new_node);
}
