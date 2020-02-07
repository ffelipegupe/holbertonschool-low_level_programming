#include <stdio.h>
/**
 * main - function that prints characters
 *
 * Description: program that prints the numbers from 00 to 99
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int i;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			putchar(n);
			putchar(i);
			if (i != '9' || n != '9')
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
