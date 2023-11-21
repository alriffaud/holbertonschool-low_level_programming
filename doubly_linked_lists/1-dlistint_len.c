#include "lists.h"

/**
 * dlistint_len - This function returns the number of elements in a linked
 * dlistint_t list.
 * @h: It's a pointer to the first element of the list.
 *
 * Return: The number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
