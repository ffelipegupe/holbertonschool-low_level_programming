#include "holberton.h"
/**
 * _abs - computes the absolute value of a number
 * @n: number to be computed
 *
 * Description: function that computes the absolute value of an integer
 * Return: the absolute value of paramter
 */
int _abs(int n)
{
	int a;

	if (n < 0)
	{
		a = n * (-1);
	}
	else
	{
		a = n;
	}
	return (a);
}
