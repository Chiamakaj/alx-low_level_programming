#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: is the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	i = 1;
	while (i <= size)
	{
		for (j = 1 ; j <= size ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i++;
	}
}
