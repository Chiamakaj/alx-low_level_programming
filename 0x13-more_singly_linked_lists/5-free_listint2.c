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
	listint_t *tmp;

	while(*head != NULL)
	{
		tmp = *head;
		free(temp->next);
		free(tmp);
	}
	*head = NULL;
}
