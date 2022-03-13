#include <stdio.h>

/**
 * main - Entry point, prints single
 * digit numbers with commas.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 9 ; i++)
	{
		{
		putchar(i + '0');
		}
		putchar(',');
	}
	for (i = 9 ; i < 10 ; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
