#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @c: the string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *c)
{
	int i, a;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replace[] = {'4', '3', '0', '7', '1'};

	for (i = 0 ; c[i] != '\0' ; i++)
	{
		for (a = 0 ; a <= 9 ; a++)
		{
			if (c[i] == find[a])
			{
				c[i] = replace[a / 2];
				a = 9;
			}
		}
	}
	return (c);
}
