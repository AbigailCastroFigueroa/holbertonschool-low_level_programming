#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: linked list
 * @idx: position to insert the new node
 * @n: data for the new node
 *
 * Return: the new node inserted or NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
	temp = *head;

	for (i = 0; i < idx - 1 && temp != 0; i++)
	{
		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	}
	return (new_node);
}
