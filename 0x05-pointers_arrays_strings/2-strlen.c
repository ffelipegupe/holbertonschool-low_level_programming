#include "holberton.h"

/**
 * _strlen - function that returns a numbers
 * @s: string to be checked
 *
 * Description: function that returns the lenght of a string
 * Returns: nothing
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
