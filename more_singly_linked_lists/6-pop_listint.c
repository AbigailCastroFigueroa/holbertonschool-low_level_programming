#include "lists.h"
/**
 * pop_listint - delete a head node
 * @head: linked list
 *
 * Return: delete node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value = (*head)->n;

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (value);
	}
	return (0);
}
