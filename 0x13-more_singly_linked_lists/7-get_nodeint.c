#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: head of the list
 * @index: index of the node
 *
 * Return: NULL, if the node does not exist.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
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
