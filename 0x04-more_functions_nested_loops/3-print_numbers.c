#include "holberton.h"

/**
 * print_numbers - function that prints numbers
 *
 * Description: function that prints the numbers from 0 to 9
 * return: numbers
 */

void print_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
