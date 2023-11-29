#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes a hash table.
 * @ht: It's a pointer to the hash table to look into.
 *
 * Return: None.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *next;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				current = ht->array[i];
				while (current != NULL)
				{
					next = current->next;
					if (current->key != NULL)
						free(current->key);
					if (current->value != NULL)
						free(current->value);
					free(current);
					current = next;
				}
			}
			free(ht->array[i]);
			ht->array[i] = NULL;
		}
		free(ht->array);
	}
	free(ht);
	ht = NULL;
}
