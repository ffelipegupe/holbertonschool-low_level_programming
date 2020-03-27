#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: index starting from 0
 * @n: pointer to the number
 *
 * Return: 1 if it worked, or -1 if an error occurred
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 32)
		return (-1);
	m = ~(1 << index);
	*n = *n & m;
	return (1);
}
