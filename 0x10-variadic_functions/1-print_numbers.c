#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator:string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Description: if separator is NULL, do not print it
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numlist;
	unsigned int i;

	if (n > 0)
	{
		va_start(numlist, n);
		for (i = 0; i < n - 1; i++)
			if (separator)
				printf("%i%s", va_arg(numlist, int), separator);
			else
				printf("%i", va_arg(numlist, int));
		printf("%i\n", va_arg(numlist, int));
	}
	else
		printf("\n");
	va_end(numlist);
}
