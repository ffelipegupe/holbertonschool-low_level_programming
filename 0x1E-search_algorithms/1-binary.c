#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function that searches using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located; -1, if value is not present in
 * array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = (size - 1);
	size_t mid;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		print_array(array, l, (r + 1));
		mid = (l + r) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid;
		else if (array[mid] < value)
			l = (mid + 1);
	}
	return (-1);
}

/**
 * print_array - function that prints an array
 * @array: pointer to the first element of the array to search in
 * @left: rightmost number
 * @right: leftmost number
 *
 * Return: nothing
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i < right - 1; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
