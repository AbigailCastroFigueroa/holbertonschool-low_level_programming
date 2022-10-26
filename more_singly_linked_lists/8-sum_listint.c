#include "lists.h"
/**
 * sum_listint - sum all the data of the stored in the linked list
 * @head: linked list
 *
 * Return: the result or NULL if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int i, value = 0;

	temp = head;

	if (!head)
		return (0);

	for (i = 0; temp != 0; i++)
	{
		value += temp->n;
		temp = temp->next;
	}
	return (value);
}
