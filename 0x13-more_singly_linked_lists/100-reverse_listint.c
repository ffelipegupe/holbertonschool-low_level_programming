#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: head of the list
 *
 * Return: a pointer to the first node of the reversed list
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *next;

	tmp = *head;
	if (tmp == NULL)
		return (NULL);
	next = tmp->next;
	tmp->next = NULL;
	while (next != NULL)
	{
		tmp = next;
		next = next->next;
		tmp->next = *head;
		*head = tmp;
	}
	return (*head);
}
