#include <stdio.h>

/**
 * main - function that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0, always in success
 */

int main(int argc, char **argv __attribute__ ((unused)))
{
	int i = 0;

	while (argc--)
		i++;
	printf("%d\n", i - 1);
	return (0);
}
