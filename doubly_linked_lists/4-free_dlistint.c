#include "lists.h"

/**
 * free_dlistint - This function frees a dlistint_t list.
 * @head: It's a pointer to the first element of the list.
 *
 * Return: None.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
