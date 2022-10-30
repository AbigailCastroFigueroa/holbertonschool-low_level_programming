#include "lists.h"

/**
 * print_dlistint - print all the elements of a double linked list
 * @h: double linked list
 *
 * Return: the amount of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (0);

	for (count = 0; temp != 0; count++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
