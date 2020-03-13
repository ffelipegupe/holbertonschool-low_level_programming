#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Description: if separator is NULL do not print it, if one string is NULL
 * print (nil)
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strlist;
	unsigned int i;
	char *ptr;

	va_start(strlist, n);
	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(strlist, char *);
		if (ptr == NULL)
		{
			ptr = "(nil)";
		}
		printf("%s", ptr);
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strlist);
}
