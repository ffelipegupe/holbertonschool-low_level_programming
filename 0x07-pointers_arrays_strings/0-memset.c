#include "holberton.h"

/**
 * _memset - function that fills the memory
 * @s: pointer to the block of memory to fill
 * @b: character to fill s with
 * @n: the first bytes of the memory area pointed to by s
 *
 * Description: function that fills memory with a constant byte
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ind;

	for (ind = 0; ind < n; ind++)
	{
		s[ind] = b;
	}

	return (s);
}
