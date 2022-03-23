#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * up to a position n.
 * @dest: the string to copy into
 * @src: the string to copy
 *
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
        char a;
	
	for (i = 0 ; i <= n ; i++)
	{
		a = src[i];
		for (j = 0 ; j != '\0' ; j++)
		{
			if (dest[j] == '\0')
			{
				dest[i] = dest[i] + a;
			}
		}
	}
	return (dest);
}
