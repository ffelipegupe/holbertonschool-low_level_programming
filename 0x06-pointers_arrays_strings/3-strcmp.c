#include "holberton.h"

/**
 * _strcmp - function that compare strings
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Description: function that compares two strings s1 and s2
 * Return: a positive number if s1 > s2, a negaitve if s1 < s2, and 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
