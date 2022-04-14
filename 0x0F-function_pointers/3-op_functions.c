#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - a function that adds two integers
 * @a: integer
 * @b: integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that subtracts two integers
 * @a: integer
 * @b: integer
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies two integers
 * @a: integer
 * @b: integer
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that dividess two integers
 * @a: integer
 * @b: integer
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that gets the remainder of two integers
 * @a: integer
 * @b: integer
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
