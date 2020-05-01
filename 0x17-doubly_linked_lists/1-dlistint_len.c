#include "lists.h"

/**
 * dlistint_len - function that returns the numeber of elements in a list
 * @h: head of the list
 *
 * Return: the number of nodes
 **/
size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	while(h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
