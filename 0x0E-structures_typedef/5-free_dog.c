#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs
 * @d: free struct
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d);
}
