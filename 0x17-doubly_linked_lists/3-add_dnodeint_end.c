#include "lists.h"

/**
 * add_dnodeint_end - function that adds a node at the end of a list
 * @head: head of the list
 * @n: data of the node to add
 *
 * Return: the address of the new element; NULL, on failure
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node)
	}
	last = *head;
	while (tmp->next != NULL)
			tmp = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;
	return (new_node);
}
