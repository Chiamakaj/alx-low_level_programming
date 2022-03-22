#include "main.h"

/**
 * _strcpy - a function copies the string pointed to by a
 * variable to another variable.
 * @dest: variable to copy to
 * @src: variable to copy from
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		for (j = 0 ; src[j] != '\0' ; j++)
		{
			dest[i] = src[j];
			if (src[j] == '\0')
			{
				dest[i] = '\0';
			}
		}
	}
	return (dest);
}
