#include "lists.h"

/**
 * add_dnodeint - This function adds a new node at the beginning of a
 * dlistint_t list.
 * @head: It's a pointer to the first element of the list.
 * @n: It's the integer element of the new node.
 *
 * Return: The number of elements.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
