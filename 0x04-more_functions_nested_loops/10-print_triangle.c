#include "holberton.h"

/**
 * print_triangle - function that prints a figure
 * @size: size of the figure
 *
 * Description: function that prints a triangle, followed by a new line
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j, k;

	i = 0;
	while (size > i)
	{
		j = i;
		while (j < (size - 1))
		{
			_putchar(' ');
			j++;
		}
		k = i + 1;
		while (k > 0)
		{
			_putchar('#');
			k--;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
