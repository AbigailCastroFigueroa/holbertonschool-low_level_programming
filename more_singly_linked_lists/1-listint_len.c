#include "lists.h"
/**
 * listint_len - function that returns the amount of elements in a linked list
 * @h: linked list given.
 *
 * Return: amount of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i;
	const listint_t *temp;

	temp = h;

	for (i = 0; temp != 0; i++)
		temp = temp->next;
	return (i);
}
