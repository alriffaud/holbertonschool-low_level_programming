#include "lists.h"

/**
 * print_dlistint - This function prints all the elements of a list_t list.
 * @h: It's a pointer to the first element of the list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
