#include "holberton.h"
#include <stdio.h>

/**
 * print_array: function that prints elements of an array
 * @a: array
 * @n: number of the elements of the array to be printed
 *
 * Description: function that prints n elements of an array of integers
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
