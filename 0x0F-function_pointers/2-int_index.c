#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to search within
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compared values
 *
 * Return: the index of the first elemente for which the cmp function does not
 * return 0, -1 if no element matches, -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
		for (i = 0; i < (int)size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
