#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: input string
 * @s2: input string
 *
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len, len1, len2;
	char *concatstr;

	if ((s1 == NULL) || (s2 == NULL))
	{
		s1 = s2 = "";
	}

	if ((s1 == NULL) && (s2 == NULL))
	{
		s1 = s2 = "";
	}

	for (len1 = 0 ; s1[len1] != '\0' ;)
	{
		len1++;
	}

	for (len2 = 0 ; s2[len2] != '\0' ;)
	{
		len2++;
	}

	len = len1 + len2;
		
	len += 1;
	
	concatstr = malloc(sizeof(char) * len);
		
	if (concatstr == NULL)
	{
		return (NULL);
	}
	
	j = 0;
	i = 0;

	while (s1[i] != '\0')
	{
		concatstr[j] = s1[i];
		i++;
		j++;
	}

	i = 0;
		
	while (s2[i] != '\0')
	{
		concatstr[j] = s2[i];
		i++;
		j++;
	}

	concatstr[j] = '\0';
		
	return (concatstr);
}
