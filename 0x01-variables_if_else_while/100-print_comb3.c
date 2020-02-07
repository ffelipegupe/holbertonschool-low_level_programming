#include <stdio.h>
/**
 * main - function that prints characters
 *
 * Description: function that prints all possible combiations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int i;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '1'; i <= '9'; i++)
		{
			if (n != i && n < i)
			{
			putchar(n);
			putchar(i);
			if (n != '8' || i != '9')
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
