#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum
 * of all the data (n) of a dlistint_t linked list.
 * @head: pointer ot first node
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
