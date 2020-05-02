#include "lists.h"

/**
 * add_dnodeint - function that adds a node at the head of a list
 * @head: head of the list
 * @n: data of the node to add
 *
 * Return: the address of the new element; NULL, on failure
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
