#include <stdio.h>

/**
 * main - a program that prints the sum numbers
 * from 1 to 1024 that are multiples of 3, 5.
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1 ; i < 1024 ; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			i *= i;
		}
	}
	printf("%d", i);
	printf("\n");
}
