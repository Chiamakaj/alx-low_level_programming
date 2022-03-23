#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: the string to be copied into
 * @src: the string to copy
 * @n: the length of src to be copied
 * 
 * Return: the new dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0 ; (i < n && src[i] != '\0') ; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}