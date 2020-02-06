#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints a string
 *
 * Description: function that prints if a random numbers is negative,
 * zero, or positive
 *
 * Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}

return (0);
}
