#include <stdio.h>
/**
 * main - function that prints a string
 *
 * Description: function that prints the alphabet in lower case
 *
 * Return: 0
*/
int main(void)
{
char l;

for (l = 'a' ; l <= 'z' ; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
