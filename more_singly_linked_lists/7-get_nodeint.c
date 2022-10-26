#include "lists.h"
/**
 * get_nodeint_at_index - get the node in the position selected
 * @head: linked list
 * @index: position selected in the linked list
 *
 * Return: node selected or NULL if it fails.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;

	if (!head)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}

