#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: a pointer to the string, 0 on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;

	c = malloc((i + j + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	k = 0;
	while (k < i)
	{
		c[k] = s1[k];
		k++;
	}
	i = k;
	for (k = 0; k < j; k++)
	{
		c[i] = s2[k];
		i++;
	}
	c[i] = '\0';
	return (c);
}
