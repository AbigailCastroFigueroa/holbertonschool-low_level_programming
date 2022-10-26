#include "lists.h"
/**
 * free_listint2 - frees linked list and reset head to NULL
 * @head: linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head && *head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}



