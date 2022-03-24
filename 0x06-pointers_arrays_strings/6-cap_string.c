#include "main.h"

/**
 * cap_string - a function that capitalizes all the first
 * letters of the words in a string.
 * @c: the string to capitalize
 *
 * Return: the capitalized string
 */
char *cap_string(char *c)
{
	int i;
	
	for (i = 0 ; c[i] != '\0' ; i++)
	{
		if (i == 0)
		{
			i++;
			if (c[i - 1] >= 'a' && c[i - 1] <= 'z')
			{
				c[i - 1] = c[i - 1] - 32;
				continue;
			}
		}
		if (c[i] == '.' && (c[i - 1] >= 'a' && c[i - 1] <= 'z'))
		{
			i++;
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
				continue;
			}
		}
		if (c[i] == '\n' || c[i] == '\t' || c[i] == ' ')
		{
			i++;
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
				continue;
			}
		}
		else
		{
			if(c[i] >= 'A' && c[i] <= 'Z')
			{
				c[i] = c[i] + 32;
			}
		}
	}
	return (c);
}
