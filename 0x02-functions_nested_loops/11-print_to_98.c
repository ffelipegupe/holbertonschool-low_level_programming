#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints numbers
 * @n: first number
 *
 * Description: function that prints all natural numbers from 0 to 98
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
