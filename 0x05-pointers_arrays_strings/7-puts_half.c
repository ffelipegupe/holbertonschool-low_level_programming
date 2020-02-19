#include "holberton.h"

/**
 * puts_half - function that prints a string
 * @str: string to be checked
 *
 * Description: function that prints the second half of a string, if the numbe
 * r of characters is off, the function should print the last n characters
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
