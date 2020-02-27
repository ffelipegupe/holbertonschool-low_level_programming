#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number to check
 * Return: the factorial number needed
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
