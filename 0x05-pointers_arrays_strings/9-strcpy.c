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
	int i = 0;

	while (src[i] <= '\0')
	{
		dest[i] = src[i];
		i++
	}
	return (dest);
}
