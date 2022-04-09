#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: number of array rows
 * @height: number of array colums
 *
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
	{
		free(*matrix);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix == NULL)
		{
			free(*matrix);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	free(*matrix)
	return (matrix);
}
