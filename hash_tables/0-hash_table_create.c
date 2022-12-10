#include "hash_tables.h"

/**
 * hash_table_create - a function that create a hash table.
 * @size: determine the size of the table.
 *
 * Return: the address of the hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *ht;
	hash_node_t **node_array;

	/* create the table */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	/* space for the array */
	node_array = malloc(sizeof(hash_node_t *) * size);
	if (node_array == NULL)
		return (NULL);

	/* loop to create the index and initialize the array */
	while (i < size)
	{
		node_array[i] = NULL;
		i++;
	}

	/* initialize the table */
	ht->size = size;
	ht->array = node_array;
	return (ht);
}



