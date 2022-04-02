#include "main.h"

/**
 * wildcmp - a function that compares two strings
 * @s1: input
 * @s2: input
 *
 * Return: 1 if the strings can be considered identical,
 * otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if ( *s1 != *s2)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
