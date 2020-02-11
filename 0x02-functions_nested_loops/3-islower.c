#include "holberton.h"
/**
 * _islower - function that checks characters
 * @c: the character to check
 *
 * Description: function that checks for lowercase character
 * Return: 1 in success (if it is lowercase)
 * 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
