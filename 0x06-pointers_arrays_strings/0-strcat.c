#include "holberton.h"

/**
 * _strcat - function that prints strings
 * @dest: string to be concatenated
 * @src: string to be concatenated
 *
 * Description: function that concatenates two strings
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	i++;
	dest[i] = '\0';
	return (dest);
}
