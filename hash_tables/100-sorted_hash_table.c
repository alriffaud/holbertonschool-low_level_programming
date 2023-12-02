#include "hash_tables.h"

/**
 * shash_table_create - This function creates a shash table.
 * @size: It's the size of the array.
 *
 * Return: A pointer to the newly created shash table, or NULL if something
 * went wrong.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new_table = malloc(sizeof(shash_table_t));

	if (new_table == NULL)
		return (NULL);
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	return (new_table);
}


/**
 * ordered_list_add - This function adds an element to an ordered list.
 * @node: It's a pointer to the node we want to add.
 * @ht: It's a pointer to the shash table to look into.
 *
 * Return: None.
 */
void ordered_list_add(shash_node_t *node, shash_table_t *ht)
{
	shash_node_t *ptr = ht->shead;

	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail = node;
		node->sprev = NULL;
		node->snext = NULL;
	}
	else
	{
		while (ptr != NULL && strcmp(node->key, ptr->key) > 0)
			ptr = ptr->snext;
		node->snext = ptr;
		if (ptr != ht->shead && ptr != NULL)
		{
			node->sprev = ptr->sprev;
			ptr->sprev->snext = node;
			ptr->sprev = node;
		}
		else if (ptr == ht->shead)
		{
			node->sprev = NULL;
			ht->shead = node;
			ptr->sprev = node;
		}
		else if (ptr == NULL)
		{
			node->sprev = ht->stail;
			ht->stail->snext = node;
			ht->stail = node;
		}
	}
}


/**
 * shash_table_set - This function adds an element to the shash table.
 * @ht: It's a pointer to the shash table to add the element or update the
 * key/value to.
 * @key: It's the key of the element to be stored.
 * @value: It's the value of the element to be stored.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || value == NULL || !strcmp(key, ""))
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	/* Check if key already exists, update value if it does */
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	ordered_list_add(new_node, ht);
	return (1);
}


/**
 * shash_table_get - This function retrieves a value associated with a key.
 * @ht: It's a pointer to the shash table to look into.
 * @key: It's the key to look for.
 *
 * Return: The value associated with the element, or NULL if key couldn’t be
 * found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

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


/**
 * shash_table_print - This function prints a shash table.
 * @ht: It's a pointer to the shash table to look into.
 *
 * Return: None.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht != NULL)
	{
		printf("{");
		ptr = ht->shead;
		if (ptr != NULL)
		{
			printf("'%s': '%s'", ptr->key, ptr->value);
			ptr = ptr->snext;
		}
		while (ptr != NULL)
		{
			printf(", '%s': '%s'", ptr->key, ptr->value);
			ptr = ptr->snext;
		}
		printf("}\n");
	}
}


/**
 * shash_table_print_rev - This function prints a shash table in reverse.
 * @ht: It's a pointer to the shash table to look into.
 *
 * Return: None.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht != NULL)
	{
		printf("{");
		ptr = ht->stail;
		if (ptr != NULL)
		{
			printf("'%s': '%s'", ptr->key, ptr->value);
			ptr = ptr->sprev;
		}
		while (ptr != NULL)
		{
			printf(", '%s': '%s'", ptr->key, ptr->value);
			ptr = ptr->sprev;
		}
		printf("}\n");
	}
}


/**
 * shash_table_delete - This function deletes a shash table.
 * @ht: It's a pointer to the shash table to look into.
 *
 * Return: None.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current, *next;

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
			ht->array[i] = NULL;
		}
		free(ht->array);
		ht->shead = NULL;
		ht->stail = NULL;
	}
	free(ht);
	ht = NULL;
}
