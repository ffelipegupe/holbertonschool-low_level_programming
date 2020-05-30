#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 *
 * Return: the value associated; NULL, if the key is not founf
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
