#include "main.h"

/**
 * reverse_array - a fuction that reverses the
 * content of an array of integers.
 * @a: array of integers
 * @n: the number of elements to swap
 *
 * Return: the reverse array
 */
void reverse_array(int *a, int n)
{
	int i, s;

	for (i = 0 ; i < n ; i++)
	{
		n--;
		s = a[i];
		a[i] = a[n];
		a[n] = s;
	}
}
