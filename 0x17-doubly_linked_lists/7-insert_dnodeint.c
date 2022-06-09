#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that
 * inserts a new node at a given position.
 * @h: pointer to the first node
 * @idx: index of the list for new node
 * @n: integer
 *
 * Returns: the address of the new node
 * or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ins_node, *temp, *node;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *h;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
		{
			return (NULL);
		}
	}

	ins_node = malloc(sizeof(dlistint_t));

	if (ins_node == NULL)
		return (NULL);

	ins_node->n = n;
	if (idx == 0)
	{
		node = *h;
		*h = ins_node;
		ins_node->prev = NULL;
	}
	else
	{
		ins_node->prev = temp;
		ins_node = temp->next;
		temp->next = ins_node;
	}
	ins_node->next = node;
	if (ins_node->next != NULL)
	{
		ins_node->next->prev = ins_node;
	}
	return (ins_node);
}
