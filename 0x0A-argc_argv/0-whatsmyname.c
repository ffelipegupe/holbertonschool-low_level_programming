#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0, always in success
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
