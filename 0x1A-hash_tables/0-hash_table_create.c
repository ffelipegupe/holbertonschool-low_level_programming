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
    
    nht = malloc(sizeof(hash_table_t))
    if(nht == NULL)
        return (NULL)
    
    nht->array = (**hash_node_t)malloc(sizeof(hash_node_t));
    if (nht->array == NULL)
        return (NULL);
    
    memset(nht->array, 0, size * sizeof(hash_node_t));
    nht->size = size;
    return nht;
}