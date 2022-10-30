#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head->prev = NULL;
		head = head->next;
		free(temp);
	}
	free(head);
}
