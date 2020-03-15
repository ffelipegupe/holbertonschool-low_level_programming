#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - function that prints a char
 * @alist: argument to pass
 * Return: nothing
 */
void print_char(va_list alist)
{
	printf("%c", va_arg(alist, int));
}
/**
 * print_float - function that prints a float
 * @alist: argument to pass
 * Return: nothing
 */

void print_float(va_list alist)
{
	printf("%f", va_arg(alist, double));
}
/**
 * print_int - function that prints a int
 * @alist: argument to pass
 * Return: nothing
 */

void print_int(va_list alist)
{
	printf("%d", va_arg(alist, int));
}
/**
 * print_string - function that prints a string
 * @alist: argument to pass
 * Return: nothing
 */

void print_string(va_list alist)
{
	char *ptr = va_arg(alist, char*);
	if (ptr == NULL)
		printf("(nil)");
	else
		printf("%s", ptr);
}

/**
 * print_all - function that print anything
 * @format: list of types of arguments
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list alist;
	fmt_t sel[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};
	int i = 0;
	int j;

	va_start(alist, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == sel[j].c)
			{
				sel[j].f(alist);
				if (format[i + 1])
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(alist);
}
