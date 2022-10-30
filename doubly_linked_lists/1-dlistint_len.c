#include "lists.h"

/**
 * dlistint_len - return the amount of node in the list
 * @h: linked list
 *
 * Return: the amount of node in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	unsigned int count;

	if (h == NULL)
		return (0);

	for (count = 0; temp != 0; count++)
	{
		temp =  temp->next;
	}
	return (count);
}
