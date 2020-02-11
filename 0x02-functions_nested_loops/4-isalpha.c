#include "holberton.h"
/**
 * _isalpha - function that checks characters
 * @c: character to check
 *
 * Description: function that checks for alphabetic character
 * Return: 1 if c is a lowercase or uppercase letter, 0 otherwise
 */
int _isalpha(int c)
{
	if(c >= 65 && c <= 90)
		return (1);
	else if(c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
