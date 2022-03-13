#include <stdio.h>

/**
 * main - Entry point, prints out the
 * lowercase alphabet except q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	for (; ch <= 'z';)
	{
		if (ch == 'd' || ch == 'p')
		ch += 2;
		else
		ch++;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
