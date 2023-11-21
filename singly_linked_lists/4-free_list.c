#include "lists.h"

/**
 * free_list - This function frees a list_t list.
 * @head: It's a pointer to the first element of the list.
 *
 * Return: None.
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		if (current->str != NULL)
			free(current->str);
		free(current);
		current = next;
	}
}
