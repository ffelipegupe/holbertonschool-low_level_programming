#include "holberton.h"

/**
 * _strncpy - function that copies a string
 * @dest: result of the copy
 * @src: source of the copy
 * @n: bytes to be copied
 *
 * Description: function that prints a string, at most n bytes of src to dest
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
