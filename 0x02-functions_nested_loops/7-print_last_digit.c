#include "main.h"

/**
 * print_last_digit - function that prints out
 * the last digit of a number.
 * @c: the integer to input
 *
 * Return: c
 */
int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
	{
		c *= -1;
	}
	else
	{
	c = _putchar(c + '0');
	}
	return (c);
}
