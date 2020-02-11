#include "holberton.h"
/**
 * _abs - prints a number
 * @n - number to be computed
 *
 * Description: function that computes the absolute value of an integer
 * Return: 0
 */
int _abs(int n)
{
	int a;

	if (n < 0)
	{
		a = n * (-1);
	}
	else if (n > 0)
	{
		a = n;
	}
	else
	{
		a = 0;
	}
	return (a);
}
