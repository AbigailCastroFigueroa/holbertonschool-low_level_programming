#include "lists.h"
/**
 * add_nodeint - function that add a node at the beggining of the list
 * @head: linked list
 * @n: integer given
 *
 * Return: the address of the new element or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
