#include "lists.h"

/**
 * get_dnodeint_at_index - This function returns the nth node of a dlistint_t
 * linked list.
 * list.
 * @head: It's a pointer to the first element of the list.
 * @index: It's the index of the node, starting from 0.
 *
 * Return: The address of the nth node element, or NULL if it failed.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}
	return (NULL);
}
