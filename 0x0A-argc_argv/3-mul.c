#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiples 2 numbers
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0, in success, 1 if does not recieve 2 numbers
 */

int main(int argc, char **argv)
{
	int i = 1;
	int mul = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	while (i < argc)
	{
		mul = mul * atoi(argv[i]);
		i++;
	}
	printf("%d\n", mul);
	return (0);
}
