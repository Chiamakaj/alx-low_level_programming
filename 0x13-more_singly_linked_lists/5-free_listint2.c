#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: a pointer to head node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	while(*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	*head = NULL;
}
