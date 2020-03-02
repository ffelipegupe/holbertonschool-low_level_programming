#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds positive numbers
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0, in success, 1 if recieves symbols that are not characters
 */

int main(int argc, char **argv)
{
	int i, j;
	int add = 0;

	i = 1;
	if (argc < 1)
		return (0);

	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("%s\n", "Error");
				return (0);
			}
		}
		add = add + atoi(argv[i]);
		i++;
	}
	printf("%d\n@", add);
	return (0);
}
