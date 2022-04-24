#include <stdio.h>

/**
 * print_str - a function that prints a string
 * before the main function is executed.
 *
 * Return: void
 */

void print_str(void) __attribute__ ((constructor));

void print_str(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
