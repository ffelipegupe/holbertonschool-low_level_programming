#include "holberton.h"

/**
 * cap_string - functio that capitalizes a string
 * @s: string to be capitalized
 *
 * Description: function that capitalizes all words of a string
 * Return: the capitalized string
 */

char *cap_string(char *s)
{
	int i, j;
	char sep[] = {' ', '\t', '\n', ',', ':', '.', '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (i == 0)
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
				s[i] = s[i] - 32;
				}
			}
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
			j++;
		}
		i++;
	}
	return (s);
}
