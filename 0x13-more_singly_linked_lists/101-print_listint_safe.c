#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 * @head: head of the list
 *
 * Description: if the function fails, exit the program with status 98
 * Return: the number of nodes in the list
 **/

size_t print_listint_safe(const listint_t *head)
{
	int c = 0;
	const listint_t *tmp, *tmp2;

	tmp = head;
	if (tmp == NULL)
		exit(98);
	while (tmp != NULL)
	{
		tmp2 = tmp;
		tmp = tmp->next;
		c++;
		printf("[%p] %d\n", (void *)tmp2, tmp2->n);
		if (tmp2 < tmp)
		{
			printf("-> [%p] %d\n", (void *)tmp, tmp->n);
			break;
		}
	}
	return (c);
}
