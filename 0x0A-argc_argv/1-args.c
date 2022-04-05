#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: argv size
 * @argv: the string command
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
