#include <stdio.h>

/**
 * main - function that prints characters and numbers
 *
 * Description: function that prints the numbers from 1 to 100, for multiple
 * s of 3 will print Fizz, for mulitples of 5 will print Buzz, and FizzBuzz
 * Return: numbers and characters
 */

int main(void)
{
	int i = 1;

	while (i < 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", i);
		i++;
	}
	if (i == 100)
		printf("Buzz\n");
	return (0);
}
