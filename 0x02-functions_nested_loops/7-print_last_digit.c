#include "main.h"

/**
 * print_last_digit - function that prints out
 * the last digit of a number.
 * @c: the integer to input
 *
 * Return: 0
 */
int print_last_digit(int c)
{
	char a = c % 10;
	return (_putchar(a + '0'));
}
