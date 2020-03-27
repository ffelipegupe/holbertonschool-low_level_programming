#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to be represented
 *
 * Return: nothing
 **/

void print_binary(unsigned long int n)
{
	char c;
	signed long int tam;
	int ban;

	tam = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}
	if (n == 1)
	{
		printf("1");
		return;
	}
	ban = 0;
	while (tam >= 0)
	{
		c = (n >> tam) & 1;
		if (ban == 1)
			putchar(c + '0');
		else
		{
			if (c == 1)
			{
				putchar(c + '0');
				ban = 1;
			}
		}
		tam -= 1;
	}
}
