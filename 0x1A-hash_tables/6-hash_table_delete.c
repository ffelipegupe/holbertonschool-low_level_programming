#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to be deleted
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp = NULL;
	hash_node_t *act = NULL;

	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			act = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = act;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
