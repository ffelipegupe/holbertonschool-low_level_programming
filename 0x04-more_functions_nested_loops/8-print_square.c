#include "holberton.h"

/**
 * print_square - function that prints
 * @size: paremeter
 *
 * Description: function that prints a square, followed by a new line.
 * Return: square
 */

void print_square(int size)
{
	int i, j;

	i = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	while (size > i)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
