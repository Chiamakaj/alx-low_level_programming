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
	char *newstring;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0 ; str[len] != '\0' ; len++)
	len += 1;
	newstring = malloc(sizeof(char) * len);
	for (i = 0 ; i <= len ; i++)
	{
		newstring[i] = str[i];
	}
	if (newstring < str)
	{
		return (NULL);
	}
	return (newstring);
}
