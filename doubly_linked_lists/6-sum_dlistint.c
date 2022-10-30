#include "lists.h"

/**
 * sum_dlistint - return the sum of the data in the nodes
 * @head: linked list
 *
 * Return: the summatory of the list data or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int i, sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	for (i = 0; temp != 0; i++)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
