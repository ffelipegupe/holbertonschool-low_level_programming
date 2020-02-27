#include "holberton.h"

/**
 * prime - check if it is a prime number
 * @n: iterator
 * @m: to check
 * Return: 1 if n is a prime number, 0 to otherwise
 */

int prime(int n, int m)
{
	if (m % n == 0 || m < 2)
		return (0);
	else if (n == m - 1)
		return (1);
	else if (m > n)
		return (prime(n + 1, m));
	return (1);
}

/**
 * is_prime_number - function that checks if a number is prime
 * @n: number to check
 * Return: 1 if n if a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	return (prime(2, n));
}
