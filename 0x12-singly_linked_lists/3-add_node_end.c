#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - computes the length of a string
 * @s: pointer to string
 *
 * Return: length of string
 */
size_t _strlen(char *s)
{
	size_t i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: string to add
 *
 * Return: the address of the new element, or NULL if it failed
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen((char *)str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
