#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable
 * @d: pointer
 * @name: second member
 * @age: thrid member
 * @owner: fourth member
 *
 * Description: this function is designed to initialize
 * a variable to type struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *bark;

	bark = malloc(sizeof(struct dog));
	bark = d;
	bark->name = name;
	bark->age = age;
	bark->owner = owner;
}
