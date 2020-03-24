#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: head of the linked list
 *
 * Return: the address of the node where the loop starts, or NULL if there is
 * no loop
 **/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp, *tmp2;

	tmp = tmp2 = head;
	while (tmp != NULL && tmp2 != NULL)
	{
		tmp = tmp->next;
		tmp2 = tmp2->next->next;
		if (tmp == tmp2)
		{
			tmp2 = head;
			while (tmp != tmp2)
			{
				tmp = tmp->next;
				tmp2 = tmp2->next;
			}
			return (tmp2);
		}
	}
	return (NULL);
}
