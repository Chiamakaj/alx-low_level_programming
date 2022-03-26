#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 * @c: character t be checked
 * 
 * 
 * Return: 1
 */
int _isupper(int c)
{
	int i, j;

	for (i = 'A' ; i <= 'Z' ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
		{
			if (c == i)
			{
				returm (1);
			}
			if (c == j)
			{
				return (0);
			}
		}
	}
}
