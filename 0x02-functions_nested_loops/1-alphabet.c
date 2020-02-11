#include "holberton.h"
/**
 * print_alphabet - function that prints a string
 *
 * Description: function that prints the alphabet in lower case
 * Return: 0
 */
void print_alphabet (void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
