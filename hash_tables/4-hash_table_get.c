#include "hash_tables.h"

/**
 * hash_table_get - This function retrieves a value associated with a key.
 * @ht: It's a pointer to the hash table to look into.
 * @key: It's the key to look for.
 *
 * Return: The value associated with the element, or NULL if key couldn’t be
 * found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL && strcmp(temp->key, key) != 0)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	return (temp->value);
}
