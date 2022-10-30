#include "lists.h"

/**
 * add_dnodeint - at a node at the beggining of the list
 * @head: head of the list
 * @n: data for the new node
 *
 * Return: new node address or NULL if fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*head == NULL)
		*head = newnode;
	else
	{
		(*head)->prev = newnode;
		newnode->next = *head;
		newnode->prev = NULL;
		*head = newnode;
	}
	return (*head);
}
