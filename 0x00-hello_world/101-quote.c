#include <stdio.h>
#include <unistd.h>

/**
 * main - run the functions
 *
 * Description: include a string in the standard error
 *
 * Return: 1
 */
int main(void)
{
write(2, "and that piece of art if useful\"- Dora Korpar, 2015-10-19\n", 61);
return (1);
}
