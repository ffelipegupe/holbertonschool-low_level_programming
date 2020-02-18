#include "holberton.h"

/**
 * swap_int - function that swaps values
 * @a: number to be swapped
 * @b: number to be swapped
 *
 * Descripion: function that swaps the values of two integers
 * Returns: nothing
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
