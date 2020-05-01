#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: head of the list
 *
 * Return: the number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	int c = 0;

	while(h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
