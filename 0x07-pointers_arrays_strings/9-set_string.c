#include "holberton.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: double pointer to be set
 * @to: char to be pointed to
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
