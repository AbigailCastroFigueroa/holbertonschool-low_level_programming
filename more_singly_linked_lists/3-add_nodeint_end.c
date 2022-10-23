#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: linked list
 * @n: integer value given
 *
 * Return: the address of the new element or NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = 0;

	if (*head == NULL)
		*head = new;
	else
	{
		for (i = 0; temp->next != 0; i++)
			temp = temp->next;
		temp->next = new;
		temp = new;
	}
	return (*head);
}

