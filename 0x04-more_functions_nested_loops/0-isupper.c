#include "holberton.h"

/**
 * _issupeper - function checks a character
 * @c: character to check
 *
 * Description: function that checks for uppercase character
 * Return: 1 if it is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
