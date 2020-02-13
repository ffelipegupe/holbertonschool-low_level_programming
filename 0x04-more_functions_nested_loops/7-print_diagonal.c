#include "holberton.h"

/**
 * print_diagonal - function that prints lines
 * @n: number of times the character
 *
 * Description: function that draws a diagonal on the terminal
 * Return: a line
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (n > i)
	{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	_putchar('\n');
}
