#include "holberton.h"

/**
 * rot13 - function that encodes
 * @s: string to be encoded
 *
 * Description: function that encodes a string using rot13
 * Return: an encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char ab[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char ro[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	i = 0;
	while (s[i])
	{
		j = 0;
		while (j < 52)
		{
			if (s[i] == ab[j])
			{
				s[i] = ro[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
