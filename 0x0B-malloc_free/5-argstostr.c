#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: vector of arguments
 * Return: a pointer to a new string, NULL on failure
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, l;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = l = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			l++;
			j++;
		}
		l++;
		i++;
	}
	l++;
	s = malloc(l * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';
		k++;
		i++;
	}
	return (s);
}
