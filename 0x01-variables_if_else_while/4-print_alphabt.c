#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		{
		while (ch == 'e' || ch == 'q')
			ch++;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}