#include "lists.h"

/**
 * add_node - This function adds a new node at the beginning of a list_t list.
 * @head: It's a pointer to the first element of the list.
 * @str: It's a pointer to the string element of the new node.
 *
 * Return: The number of elements.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	if (str != NULL)
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = strlen(str);
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
