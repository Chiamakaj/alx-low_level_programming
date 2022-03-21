#include "main.h"

/**
 * puts2 - a function that prints every other character
 * of a string, starting with the first character.
 * @str: the string to input
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	for (; str[i] != '\0' ;)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
