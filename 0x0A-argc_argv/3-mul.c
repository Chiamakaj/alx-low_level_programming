#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argv: command line string
 * @argc: argv size
 *
 * Return: 0 if i is 2 or more and 1 if otherwise
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
