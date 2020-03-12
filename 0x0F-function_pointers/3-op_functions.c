#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function that adds two numbers
 * @a: number to add
 * @b: number to add
 *
 * Return: the addition of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that substracts two numbers
 * @a: number
 * @b: number
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two numbers
 * @a: number
 * @b: number
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two numbers
 * @a: number
 * @b: number
 *
 * Return: the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function that moduls two numbers
 * @a: number
 * @b: number
 *
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a % b);
}
