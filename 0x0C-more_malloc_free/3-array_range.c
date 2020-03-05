#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers. The array created
 * should contain all the values from min (included) to max (included), ordered
 * from min to max
 * @min: minimun value
 * @max: maximun value
 * Return: the pointer to the newly created array, NULL: if min > max, if
 * malloc fails
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * max - min + 1);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
