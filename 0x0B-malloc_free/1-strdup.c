#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - fucntion that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: a pointer on success, NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *a = NULL;
	unsigned int size = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	a = malloc((size + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		a[i] = str[i];
	return (a);
}
