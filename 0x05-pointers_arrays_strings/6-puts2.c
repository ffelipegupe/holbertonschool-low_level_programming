#include "holberton.h"

/**
 * puts2 - function that prints a string
 * @str: string to be checked
 *
 * Description: function that prints every other character of a string, startin
 * g with the first character, followed by a new line
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
