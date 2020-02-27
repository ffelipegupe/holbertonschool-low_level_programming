#include "holberton.h"

/**
 * _pow_recursion - function that returns a value
 * @x: number to raise
 * @y: number to raise to
 *
 * Description: function that returns the value of x raised to the power of y
 * Return: a number, -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
