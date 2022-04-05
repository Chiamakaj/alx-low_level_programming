#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name
 * @argc: size of string argv
 * @argv: the command line string
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
