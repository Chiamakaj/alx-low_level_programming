#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: input string
 * @s2: input string
 * @n: no of s2 bytes to be concatenated with s1
 * Return: pointer to the new memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, len1, i, j;
	char *newmem;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len = 0; s1[len] != '\0'; len++)
	{
	}
	for (len1 = 0; s2[len1] != '\0'; len1++)
	{
	}
	newmem = malloc(sizeof(char) * (len + n + 1));
	if (newmem == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		newmem[j] = s1[i];
		i++;
		j++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		while (i < n)
		{
			newmem[j] = s2[i];
			i++;
			j++;
		}
	}
	newmem[j] = '\0';
	return (newmem);
}
