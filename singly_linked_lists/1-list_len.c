#include "lists.h"

/**
 * list_len - This function returns the number of elements in a linked list_t
 * list.
 * @h: It's a pointer to the first element of the list.
 *
 * Return: The number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str != NULL)
			node_count++;
		h = h->next;
	}
	return (node_count);
}
