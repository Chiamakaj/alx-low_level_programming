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
 * avariable ot type struct dog.
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
