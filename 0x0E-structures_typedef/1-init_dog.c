#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *bark;

	bark = malloc(sizeof(struct dog));
	if (bark == NULL)
	{
		return;
	}
	bark = d;
	bark->name = name;
	bark->age = age;
	bark->owner = owner;
}
