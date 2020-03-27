#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @index: index starting from 0
 * @n: number to update
 *
 * Return: 1 if it worked, or -1 if an error occurred
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 32)
		return (-1);
	m = 1 << index;
	*n = *n | m;
	return (1);
}
