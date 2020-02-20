#include "holberton.h"

/**
 * reverse_array - function that prints a string
 * @a: string to be reversed
 * @n: number of elements of the array
 *
 * Description: function that reverses the content of an array of integers
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, s;
	int f;

	i = 0;
	s = n - 1;

	while (i < s)
	{
		f = a[i];
		a[i] = a[s];
		a[s] = f;
		i++;
		s--;
	}
}
