#include "holberton.h"
/**
 * main - function that prints a string
 *
 * Description: function that prints "Holberton" followed by a new line
 * Return: 0
 */
int main(void)
{
	char hol[] = "Holberton";
	int i = 0;

	while (hol[i] != '\0')
	{
		_putchar(hol[i]);
			 i++;
	}
			_putchar('\n');

		return (0);
}
