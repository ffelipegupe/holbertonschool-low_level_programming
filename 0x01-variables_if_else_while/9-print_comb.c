#include <stdio.h>
/**
 * main - function that prints characters
 *
 * Description: function that prints all combinations of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
