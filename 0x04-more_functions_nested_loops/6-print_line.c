#include "holberton.h"
/**
 * print_line - function that prints a line
 * @n: lenght
 *
 * Description: function that prints a straight line in the terminal
 * Return: a line
 */

void print_line(int n)
{
	int i = 0;

	while (n > i)
	{
		_putchar('_');
			i++;
	}
	_putchar('\n');
}
