#include "holberton.h"
#include <stdlib.h>

/**
 * _strpbrk - function that searches for any of a set of bytes
 * @s: string to be checked
 * @accept: characters to match
 *
 * Description: function that locates the first ocurrence in the strins of any
 * of the bytes in the string accept
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULLif not such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
