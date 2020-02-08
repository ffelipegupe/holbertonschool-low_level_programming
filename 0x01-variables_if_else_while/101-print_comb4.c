#include <stdio.h>
/**
 * main - function that prints characters
 *
 * Description: function that prints possible combinations of thre digits
 *
 * Return: 0
 */
int main(void)
{

	int n;
	int m;
	int o;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '1'; m <= '9'; m++)
		{
			for (o = '2'; o <= '9'; o++)
			{
				if (m != o && m < o && n != m && n < m)
				{
					putchar(n);
					putchar(m);
					putchar(o);
					if (n != '7' || m != '8' || o != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
