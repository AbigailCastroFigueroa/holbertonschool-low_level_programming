#include "lists.h"
/**
 *  print_listint - function that prints all the elements of a linked list
 *  @h: linked list.
 *
 *  Return: the amount of elements in the list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int i;

	temp = h;

	for (i = 0; temp != 0; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
