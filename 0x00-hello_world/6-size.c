#include <stdio.h>

/**
 * main - run a function
 *
 * Description: prints the sixe of data types in bytes
 *
 * Return: 0
 */
int main(void)
{
  char c;
  int i;
  long g;
  long long l;
  float f;

  printf("Sice of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
  printf("Sice of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
  printf("Sice of a long int: %lu byte(s)\n", (unsigned long)sizeof(g));
  printf("Sice of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
  printf("Sice of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
  return (0);
}
