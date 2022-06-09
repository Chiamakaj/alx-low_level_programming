#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - a function that frees
 * a dlistint_t list.
 * @head: pointer to the first node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = NULL;

	while (head != NULL)
	{
		node = head->next;
		free(node);
		head = node;
	}
}
