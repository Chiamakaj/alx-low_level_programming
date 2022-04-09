#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: input string
 *
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i, len;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0 ; str[len] != '\0' ; len++)
	{
	}
	array = malloc((sizeof(char) * len) + 1);
	for (i = 0 ; i <= len ; i++)
	{
		array[i] = str[i];
	}
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
