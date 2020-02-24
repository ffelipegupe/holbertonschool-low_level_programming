#include "holberton.h"
#include <stdlib.h>

/**
 * _strchr - function that locates a character in a string
 * @s: string to the character to be searched at
 * @c: character to be located
 *
 * Description: function that locates a character in a string
 * Return: a pointer to the first ocurrence of the character c in the string
 * s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
