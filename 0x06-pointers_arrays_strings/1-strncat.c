#include "holberton.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * @n: number of bytes
 *
 * Description: function that concatenates two strings. It will use at most n
 * bytes from src, and src does not need to be null-terminated if it contains
 * n or more bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}

	return (dest);
}
