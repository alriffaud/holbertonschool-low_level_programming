#include "lists.h"

/**
 * delete_dnode_zero - This function deletes the node at index zero of a
 * dlistint_t list.
 * @h: It's a pointer to the first element of the list.
 *
 * Return: None.
 */
int delete_dnode_zero(dlistint_t **h)
{
	dlistint_t *current = *h;

	if (*h == NULL)
		return (-1);
	*h = current->next;
	if (current->next != NULL)
		current->next->prev = NULL;
	free(current);
	return (1);
}

/**
 * delete_dnode_end - This function deletes the node at the end of a
 * dlistint_t list.
 * @e: It's a pointer to the end element of the list.
 *
 * Return: None.
 */
int delete_dnode_end(dlistint_t *e)
{
	if (e == NULL)
		return (-1);
	if (e->prev != NULL)
		e->prev->next = NULL;
	free(e);
	e = NULL;
	return (1);
}

#include "lists.h"

/**
 * delete_dnodeint_at_index - This function deletes the node at index index of
 * a dlistint_t list.
 * @head: It's a pointer to the first element of the list.
 * @index: It's the index of the node, starting from 0.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		delete_dnode_zero(head);
		return (1);
	}
	while (current->next != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current->next == NULL)
	{
		if (index == i)
		{
			delete_dnode_end(current);
			return (1);
		}
		if (index > i)
			return (-1);
	}
	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);
	return (1);
}

