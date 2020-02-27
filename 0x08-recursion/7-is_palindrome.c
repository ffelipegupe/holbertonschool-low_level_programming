#include "holberton.h"

/**
 * _strlen_recursion - function that returns the lenght of a string
 * @s: string to check
 * Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * pal - function that checks if s is a palidrome
 * @s: string to check
 * @l: left checker
 * @r: right checker
 * Return: 1 if s is a palidrome, 0 otherwise
 */
int pal(char *s, int l, int r)
{
	if (s[l] == s[r])
		if (l > r / 2)
			return (1);
		else
			return (pal(s, l + 1, r - 1));
	else
		return (0);
}

/**
 * is_palindrome - function that checks a palindrome
 * @s: string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	return (pal(s, 0, _strlen_recursion(s) - 1));
}
