#include "holberton.h"

/**
 * print_most_numbers - function that prints numbers
 *
 * Description: function that prints the numbers 0 through 9 but not 2,4
 * Return: numbers
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (!(i <= 4 && i != 0 && (i % 2) == 0))
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
