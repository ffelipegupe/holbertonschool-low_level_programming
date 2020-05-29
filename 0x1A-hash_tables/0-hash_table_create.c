#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * 
 * Return: a pointer to the created table; NULL, on failure
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *nht;

    if (size < 1)
        return(NULL);

    nht = malloc(sizeof(hash_table_t));
    if(nht == NULL)
        return (NULL)

    nht->array = malloc(sizeof(hash_node_t) * size);
    if (nht->array == NULL)
        return (NULL);
    
    nht->size = size;
    return (nht);
}