#include "holberton.h"

/**
 * root - function that checks the square root
 * @n: base
 * @m: iterator
 * Return: i if the root exists, -1 otherwise
 */

int root(int n, int m)
{
	if (n * n == m)
		return (n);
	if (n * n > m)
		return (-1);
	return (root(n + 1, m));
}

/**
 * _sqrt_recursion - function that returns the natural sqroot of a number
 * @n: number to check
 * Return: a number, -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (root(1, n));
}
