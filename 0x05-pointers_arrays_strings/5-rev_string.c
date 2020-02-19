#include "holberton.h"

/**
 * _strlen - function that returns a numbers
 * @s: string to be checked
 *
 * Description: function that returns the lenght of a string
 * Return: i, the lenght of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
#include "holberton.h"

/**
 * rev_string - function that prints a string
 * @s: string to be reversed
 *
 * Description: function that reverse a string
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, l;
	char p, q;

	l = _strlen(s) - 1;
	i = 0;
	while (i < l)
	{
		p = s[i];
		q = s[l];
		s[i++] = q;
		s[l--] = p;
	}
}
