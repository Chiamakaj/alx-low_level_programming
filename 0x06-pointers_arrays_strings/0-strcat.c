#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: a string to be appended.
 * @src: the string to append.
 *
 * Return: the content of dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	char a;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		a = dest[i];
		for ( j = 0 ; src[j] != '\0' ; j++)
		{
			if (dest[i] == '\0')
			{
				dest[i] = a + src[j];
			}
		}
	}
	return (dest);
}
