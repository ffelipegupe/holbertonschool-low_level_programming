#include "holberton.h"
/**
 * jack_bauer - prints minutes
 *
 * Description: function that prints every minute from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int n, m, p, q;

	for (n = 0; n <= 2; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (n == 2 && m == 4)
				break;
			for (p = 0; p <= 5; p++)
			{
				for (q = 0; q <= 9; q++)
				{
					_putchar(n + '0');
					_putchar(m + '0');
					_putchar(':');
					_putchar(p + '0');
					_putchar(q + '0');
					_putchar('\n');
				}
			}
		}
	}
}
