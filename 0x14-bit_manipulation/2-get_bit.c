#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: index starting from 0
 * @n: number to be checked
 *
 * Return: the value of the bit at index index or -1 if an error occured
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;

	if (index > 32)
		return (-1);
	m = 1 << index;
	m = m & n;
	m = m >> index;
	return (m);
}
