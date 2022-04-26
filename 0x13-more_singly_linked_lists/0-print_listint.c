#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - a function that prints all
 * the elements of a listint_t list.
 * @h: first node
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (NULL);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
