#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: head of the list
 *
 * Return: nothing
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
