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
	
	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (j = 0 ; src[j] != '\0' ; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
