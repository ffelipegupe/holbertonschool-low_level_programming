#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given index
 * @h: head of the list
 * @idx: index of the list where new node should be added
 * @n: int to add
 *
 * Return: the address of the new node, NULL on failure
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new_node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	tmp = *h;
	if (tmp == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i != idx - 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		i++;
	}
	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next->prev = new_node;
	tmp->next = new_node;
	return (new_node);
}
