#include <stdio.h>


/**
 * positive_or_negative - function prints the sign
 * of a given number.
 * @i: number to input.
 *
 * Return: void.
 */
void positive_or_negative(int i)
{
	if (i > 0)
                printf("%d is positive\n", i);
        else if (i == 0)
                printf("%d is zero\n", i);
        else
                printf("%d is negative\n", i);
}

