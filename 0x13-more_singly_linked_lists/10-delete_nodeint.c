#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of a list
 * @head: head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 on failure
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *prev;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	tmp = *head;
	if (tmp != NULL && index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp != NULL)
	{
		if (i > index)
			return (-1);
		if (i == index - 1)
		{
			prev = tmp->next;
			tmp->next = prev->next;
			free(prev);
			return (1);
		}
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
