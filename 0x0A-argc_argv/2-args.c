#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0, always in success
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
