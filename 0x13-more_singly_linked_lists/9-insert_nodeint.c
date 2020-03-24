#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given index
 * @head: head of the list
 * @idx: index of the list where new node should be added
 * @n: int to add
 *
 * Return: the address of the new node, NULL on failure
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	tmp = *head;
	if (tmp == NULL && idx !=0)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = tmp;
		*head = new_node;
		return (*head);
	}
	while (tmp != NULL)
	{
		if (i > idx)
		{
			return (NULL);
		}
		if (i == idx - 1)
		{
			new_node->n = n;
			new_node->next = tmp->next;
			tmp->next = new_node;
		}
		i++;
		tmp = tmp->next;
	}
	return (new_node);
}
