#include "lists.h"

/**
 * add_dnodeint_end - at a new node at the end of the list
 * @head: head of the list
 * @n: data for the new node
 *
 * Return: the address of the new node or NULL if fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int i;
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		new->prev = *head;
	}
	else
	{
		for (i =  0; temp->next != 0; i++)
			temp = temp->next;
		temp->next = new;
		new = temp->prev;
		new = temp;
	}
	return (*head);
}
