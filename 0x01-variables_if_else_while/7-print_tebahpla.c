#include <stdio.h>
/**
 * main - function that prints a string
 *
 * Description: function that prints the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
char r;

for (r = 'z'; r >= 'a'; r--)
{
putchar(r);
}
putchar('\n');
return (0);
}
