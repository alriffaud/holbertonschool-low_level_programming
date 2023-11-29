#include "hash_tables.h"

/**
 * hash_table_print - This function prints a hash table.
 * @ht: It's a pointer to the hash table to look into.
 *
 * Return: None.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int aux = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL && ht->array[i]->key != NULL
				&& ht->array[i]->value != NULL && aux == 0)
			{
				printf("'%s': '%s'", ht->array[i]->key,
						ht->array[i]->value);
				aux = 1;
				continue;
			}
			if (ht->array[i] != NULL && ht->array[i]->key != NULL
					&& ht->array[i]->value != NULL && aux == 1)
				printf(", '%s': '%s'", ht->array[i]->key,
						ht->array[i]->value);
		}
		printf("}\n");
	}
}
