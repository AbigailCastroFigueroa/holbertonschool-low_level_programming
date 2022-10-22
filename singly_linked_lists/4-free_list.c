#include "lists.h"
/**
 * free_list - function that frees a single linked list
 * @head: start of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != 0)
	{
	temp = head;
	head = head->next;
	free(temp->str);
	free(temp);
	}
	free(head);
}
