#include "holberton.h"

/**
 * _isupper - function checks a character
 * @c: character to check
 *
 * Description: function that checks for uppercase character
 * Return: 1 if it is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
