#include "main.h"

/**
 * main - a function that prints the
 * alphabet in lowercase.
 * @print_alphabet: Nothing to input
 *
 * Return: void.
 */
void print_alphabet(void)
{
	int i;
	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
