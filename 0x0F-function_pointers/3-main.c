#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - get a operation to make between two arguments
 * @argc: number of arguments to pass
 * @argv: array of strings
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1])
	{
		printf("%s\n", "Error");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	res = get_op_func(argv[2])(num1, num2);

	printf("%d\n", res);
	return (0);
}
