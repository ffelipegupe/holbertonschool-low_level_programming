#include "holberton.h"

/**
 * _strspn - function that gets the lenght of a prefix subtring
 * @s: string
 * @accept: number of chars
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return (c);
}
