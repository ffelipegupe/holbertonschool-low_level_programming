#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: head of the list
 * @index: index of the node
 *
 * Return: NULL, if the node does not exist.
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int n = 0;

	tmp = head;
	while (tmp != NULL)
	{
		if (n == index)
			return (tmp);
		n++;
		tmp = tmp->next;
	}
	return (NULL);
}
