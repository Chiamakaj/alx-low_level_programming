#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - a function that adds a new
 * node at the beginning of a dlistint_t list.
 * @head: a pointer to the pointer of the first node
 * @n: new node value
 * Return: the address of the new element,
 * or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	*head = new_node;

	if (new_node->next != NULL)
		(new_node->next)->prev = new_node;
	return (new_node);
}
