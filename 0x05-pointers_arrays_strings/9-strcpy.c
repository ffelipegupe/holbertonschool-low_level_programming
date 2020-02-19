#include "holberton.h"

/**
 * _strcpy - function that copies a string
 * @dest: pointer to destination of a string
 * @src: pointer to destination of a string
 *
 * Description: function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
