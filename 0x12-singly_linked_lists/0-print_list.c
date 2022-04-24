#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: the first node
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
