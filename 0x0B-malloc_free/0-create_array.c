#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the input
 * @c: the string to input
 *
 * Return: NULL if size = 0, a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if ((size == 0) || (array == 0))
	{
		return (0);
	}
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
