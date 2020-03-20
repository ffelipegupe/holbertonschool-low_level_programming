#include <stdio.h>

/**
 * first - function that prints a string before the main is executed
 *
 * Return: nothing
 **/
void first(void) __attribute__ ((constructor));

void first(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
	);
}
