#include <stdio.h>
/**
 * main - function that prints a script
 *
 * Description: function that prints the alphabet in lower and upper case
 *
 * Return: 0
 */
int main(void)
{
char l;

for (l = 'a'; l <= 'z'; l++)
{
putchar(l);
}
for (l = 'A'; l <= 'Z'; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
