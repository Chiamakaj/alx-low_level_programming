#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints
 * natural numbers up to 98.
 * @n: the starting point for the number
 *
 * Return: list of numbers
 */
void print_to_98(int n)
{
	int i;

	for (i = n ; i <= 98 ; i++)
	{
		if (i == 98)
		{
			break;
			printf("%d, ", i);
		}
	for (i = n ; i >= 98 ; i--)
	{
		if(i == 98)
		{
			break;
			printf("%d, ", i);
		}
	}
		if (n == 98)
		{
			break;
			printf("%d, ", n);
		}
	printf("\n");
	}
}
