#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments
 *
 * Return: the result of the sum, 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sumlist;
	int sum = 0;
	unsigned int i;

	va_start(sumlist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(sumlist, int);

	va_end(sumlist);
	return (sum);
}
