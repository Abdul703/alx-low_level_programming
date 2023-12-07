#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add new node at the head of the list
 *
 * @head: the head of the list
 * @n: integer value of the node
 *
 * Return: pointer to the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
