#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of the array
 * Return: a pointer to the allocated memory, NULL if nmemb or size is 0,
 * NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mal;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mal = malloc(nmemb * size);
	if (mal == NULL)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
		mal[i++] = 0;
	return (mal);
}
