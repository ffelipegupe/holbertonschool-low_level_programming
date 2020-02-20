#include "holberton.h"

/**
 * string_toupper - function that changes a string
 * @s: string to be changed
 *
 * Description: function that changes all lowercase of a string to uppercase
 * Return: an uppercased string
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 'a' - 'A';
		}
		i++;
	}

	return (s);
}
