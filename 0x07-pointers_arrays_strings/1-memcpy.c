#include "holberton.h"

/**
 * _memcpy - function that copies
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: number of bytes to be copied from src
 *
 * Description: function that copies n bytes from memory area src to dest
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
