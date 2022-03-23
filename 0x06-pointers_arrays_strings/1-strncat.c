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

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}
	return (dest);
}
