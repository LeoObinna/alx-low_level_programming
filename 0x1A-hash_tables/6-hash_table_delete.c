#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *current, *temp;
	unsigned long int a;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			current = ht->array[a];
			while (current != NULL)
			{
				temp = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
