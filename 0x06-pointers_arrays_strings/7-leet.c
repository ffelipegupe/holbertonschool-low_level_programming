#include "holberton.h"

/**
 * leet - function that encodes
 * @s: string to be enconded
 *
 * Description: function that encondes a string into 1337
 * Return: a string
 */

char *leet(char *s)
{
	int i, j, k;
	char ab[] = {"aeotlAEOTL"};
	char nu[] = {"4307143071"};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (ab[j] != '\0')
		{
			if (s[i] == ab[j])
			{
				k = j;
				s[i] = nu[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
