#include <stdio.h>

/**
 * before_main - a function that prints a string
 * before the main function is executed.
 *
 * Return: void
 */

void before_main(void) __attribute__ ((constructor));

void befire_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
