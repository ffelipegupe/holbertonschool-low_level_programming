#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index of a list
 * @head: head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 on failure
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *next;
	unsigned int i;

	tmp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0 || tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	for (i = 0; tmp != NULL && i < index - 1; i++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	next = tmp->next->next;
	tmp->prev->next = tmp->next;
	free(tmp->next);
	tmp->next = next;
	return (-1);
}
