#include "holberton.h"
/**
 * print_last_digit - functiont that prints a digit
 * @n: number to be inspected
 *
 * Description: function that prints the last digit of a number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int i, m;

	i = (n % 10);
	if (i < 0)
	{
		i = -i;
	}
	m = '0' + i;
	_putchar(m);
	return (i);
}
