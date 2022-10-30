#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a linked list
 * @head: linked list
 * @index: selected node
 *
 * Return: selected node or NULL if fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;

	if (head == NULL)
		return (0);

	for (i = 0; i < index && temp != 0; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
