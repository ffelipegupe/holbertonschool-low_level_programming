#include "holberton.h"

/**
 * more_numbers - function that prints numbers
 *
 * Description: function that prints 10 times the numbers 0 through 14
 * Return: table
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
