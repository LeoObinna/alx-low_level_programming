#include "hash_tables.h"

/**
 * hash_table_create - It creates a hash table
 * @size: Size of the array
 *
 * Return: a pointer to the newly created hash table,
 * if something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int t;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (t = 0; t < size; t++)
		ht->array[t] = NULL;

	return (ht);
}
