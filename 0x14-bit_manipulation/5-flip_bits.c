#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number to compare
 * @m: number to compare
 *
 * Return: the number of bits
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comp;
	unsigned int res;

	comp = n ^ m;
	res = 0;
	while (comp > 0)
	{
		if ((comp & 1) != 0)
			res++;
		comp = comp >> 1;
	}
	return (res);
}
