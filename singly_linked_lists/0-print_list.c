#include "lists.h"
/**
 * print list - function that prints all the elements of the list.
 * @h: list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i;
	const list_t *temp = h;

	for (i = 0; temp != 0; i++)
	{
		if (temp->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)");
			temp = temp->next;
			i++;
		}
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (i);
}
