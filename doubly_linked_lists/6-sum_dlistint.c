#include "lists.h"

/**
 * sum_dlistint - This function returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head: It's a pointer to the first element of the list.
 *
 * Return: The number of nodes.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
