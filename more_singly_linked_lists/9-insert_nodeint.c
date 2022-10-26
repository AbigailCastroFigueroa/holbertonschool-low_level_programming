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
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
	temp = *head;

	for (i = 1; i < idx; i++)
	{
		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	}
	return (*head);
}
