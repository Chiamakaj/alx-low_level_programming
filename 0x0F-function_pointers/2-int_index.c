#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches foran integer.
 * @array: array
 * @size: number of array element.
 * @cmp: pointer to the function for comparing valus.
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
