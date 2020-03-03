#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - function that creates an aray of chars, and initializes it
 * with a specific char
 * @size: size of the array
 * @c: character to initiliaze with
 * Return: a pointer to array, NULL if it fails (size = 0)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a = malloc(size * sizeof(char));

	if (a == NULL || size == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
