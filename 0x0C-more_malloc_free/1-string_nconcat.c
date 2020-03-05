#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function that returns a number
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


/**
 * string_nconcat - function that concatenates twos strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * @n: bytes of s2 to concatenate
 * Return: a pointer which contains s1 followed by n bytes of s2, NULL
 * on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if ((int)n > _strlen(s2))
		n = _strlen(s2);
	con = malloc(_strlen(s1) + n + 1);
	if (con == NULL)
		return (NULL);

	i = 0, j = 0;
	while (s1[i] != '\0')
	{
		con[j++] = s1[i++];
	}
	i = 0;
	while (s2 != '\0' && n-- != 0)
		con[j++] = s2[i++];
	con[j] = '\0';
	return (con);
}
