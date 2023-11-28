#include "hash_tables.h"

/**
 * key_index - This function gives the index of a key.
 * @key: It's the key of the element to be stored.
 * @size: It's the size of the array.
 *
 * Return: the index at which the key/value pair should be stored in the array
 * of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	if (size != 0)
		i = hash_djb2(key) % size;
	else
		i = 0;
	return (i);
}
