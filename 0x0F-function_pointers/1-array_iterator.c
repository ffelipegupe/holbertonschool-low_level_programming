#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter on
 * each element of an array
 * @array: array to check
 * @size: size of the array
 * @action: pointer to the function to sue
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
		for  (i = 0; i < (int)size; i++)
			action(array[i]);
}
