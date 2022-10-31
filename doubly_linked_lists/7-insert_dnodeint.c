#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: linked list
 * @idx: position to insert the new node
 * @n: data for the new node
 *
 * Return: the new node inserted or NULL if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		(*h)->prev = new_node;
		new_node->next = *h;
		*h = new_node;
	}
	else
	{
		temp = *h;

		for (i = 0; i < idx - 1 && temp != 0; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
