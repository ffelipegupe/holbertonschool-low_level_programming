#include <stdio.h>
/**
 *
 * main - function that prints a string
 *
 * Description: function that prints the alphabet without the e and the q
 *
 * Return: 0
 */
int main(void)
{
char l;

for (l = 'a'; l <= 'z'; l++)
{
if (l != 'e' && l != 'q')
{
putchar(l);
}
}
putchar('\n');
return (0);

}
