#include "lists.h"

/**
 * insert_dnodeint_at_index - This function adds a new node at the end of a
 * dlistint_t list.
 * @h: It's a pointer to the first element of the list.
 * @idx: It's the index of the node, starting from 0.
 * @n: It's the integer element of the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	while (current->next != NULL && i < idx)
	{
		current = current->next;
		i++;
	}
	if (current->next == NULL)
	{
		if (i == idx)
			return (add_dnodeint_end(h, n));
		else
			return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	current->prev->next = new_node;
	new_node->prev = current->prev;
	new_node->next = current;
	current->prev = new_node;
	return (new_node);
}
