#include "main.h"

/**
 * islower - a function that checks
 * for lowercase alphabet.
 *
 * Return: 1 if lowercase
 * 0 if otherwise.
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	if (c == i)
	return (1);
	return (0);
}
