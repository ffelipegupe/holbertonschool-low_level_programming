#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * linear_search - searches for a value in an array of integers Linear
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located; -1, if array is NULL or
 * if value not found
 **/

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array [%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
