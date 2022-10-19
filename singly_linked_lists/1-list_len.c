#include "lists.h"
/**
 * list_len - function that return the amount of elements in a link list
 * @h: list
 *
 * Return: the amount of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int counter;
	const list_t *temp = h;

	for (counter = 0; temp != 0; counter++)
	{
		temp = temp->next;
	}
	return (counter);
}
