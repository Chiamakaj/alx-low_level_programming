#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string
 * @accepts: the letters to compare s with
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				check = 1;
			}
		}
		if (check == 0)
		{
			return (value);
		}
	}
	return (value);
}
