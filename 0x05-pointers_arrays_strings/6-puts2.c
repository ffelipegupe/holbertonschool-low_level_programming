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
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
