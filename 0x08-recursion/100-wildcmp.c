#include "holberton.h"

/**
 * compare - function that checks if 2 strings can be considered identical
 * @s1: string to compare
 * @s2: string to compare
 * @i: index
 * @w: wilcard
 * Return: 1 if the strings, 0 otherwise
 */

int compare(char *s1, char *s2, int i, int w)
{
	if (s1[i] == '\0' && s2[w] == '\0')
		return (1);
	if (s1[i] == s2[w])
		return (compare(s1, s2, i + 1, w + 1));
	if (s1[i] == '\0' && s2[w] == '*')
		return (compare(s1, s2, i, w + 1));
	if (s2[w] == '*')
		return (compare(s1, s2, i + 1, w) || compare(s1, s2, i, w + 1));
	return (0);
}

/**
 * wildcmp - function that compares 2 strings
 * @s1: string to compare
 * @s2: string to compare
 * Return: 1 if the strins can be considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	return (compare(s1, s2, 0, 0));
}
