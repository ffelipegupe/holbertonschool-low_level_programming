#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTER_H_

void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);

#endif /* _FUNCTION_POINTERS_H_ */
