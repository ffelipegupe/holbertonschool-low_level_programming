#include "holberton.h"
#include <stdlib.h>

/**
 * _strstr - function that locates a substring
 * @haystack: string to check
 * @needle: string to be located
 *
 * Description: function that finds the first ocurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *beg = haystack;
		char *pat = needle;

		while (*pat == *haystack && *pat != '\0' && *haystack != '\0')
		{
			haystack++;
			pat++;
		}
		if (*pat == '\0')
		{
			return (beg);
		}
		haystack = beg + 1;
	}
	return (NULL);
}
