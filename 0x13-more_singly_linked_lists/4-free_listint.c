#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: head node
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
	{
		free(head->next);
	}
	free(head);
}
