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
	int i, n;

	n = 0;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
		n++;
	}
	for (; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
