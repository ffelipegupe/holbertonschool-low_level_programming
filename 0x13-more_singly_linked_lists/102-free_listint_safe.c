#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_int list
 * @h: double pointer to the head of the list
 *
 * Return: the size of the list that was freed
 **/

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *tmp2;
	int c = 0;

	tmp = *h;
	while (tmp != NULL)
	{
		tmp2 = tmp;
		tmp = tmp->next;
		free(tmp2);
		if (tmp2 < tmp)
			break;
		c++;
	}
	*h = NULL;
	return (c);
}
