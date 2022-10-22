#include "lists.h"
/**
 * add_node_end - add a new node at the end of the list
 * @head: head of the list
 * @str: string given
 *
 * Return: address of the new node or NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node;
	list_t *temp;
	int i;

	new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = 0;

	temp = *head;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		for (i = 0; temp->next != 0; i++)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		temp = new_node;
	}
	return (*head);
}
