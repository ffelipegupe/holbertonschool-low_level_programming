#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct ch_fmt - Struct ch_fmt
 * @c: the format
 * @f: the function associated
 */
typedef struct ch_fmt
{
	char c;
	void (*f)(va_list);
} fmt_t;


#endif
