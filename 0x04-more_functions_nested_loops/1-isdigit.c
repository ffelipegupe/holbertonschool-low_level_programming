#include "holberton.h"

/**
 * _isdigit - function that checks
 * @c: int to be check
 *
 * Description: function that checks for a digit, 0 through 9
 * Return: 1 if it is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
