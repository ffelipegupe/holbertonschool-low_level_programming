#include "holberton.h"

/**
 * _puts - function that prints a string
 * @str: string to be printed
 *
 * Description: function that prints a string entered by parameter
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
