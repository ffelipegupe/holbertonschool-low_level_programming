#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: head of the list
 *
 * Description: if str is NULL, print [0] (nil)
 * Return: the number of nodes
 **/

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			pintf("%s\n", "[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		c++;
		h = h->next;
	}
	return (c);
}
