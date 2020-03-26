#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: pointer to the binary number to be converted
 *
 * Return: the converted number, 0 if there is one or more chars in the string
 * that is not 0 or 1, or if b is NULL
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '1')
			dec = (dec << 1) | 1;
		else if (b[i] == '0')
			dec <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	return (dec);
}
