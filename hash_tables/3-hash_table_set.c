#include "hash_tables.h"

/**
 * hash_table_set - adds elements to the hash table.
 * @ht: hash table.
 * @key: is the key.
 * @value: is the value associated with the key.
 *
 * Return: 1 if succeed, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp, *new;
	unsigned long int index_of_key, i;

	index_of_key = key_index((unsigned char *)key, ht->size);	

	if (key == NULL)
		return (0);

	for (i = index_of_key; ht->array[i]; i++)
	{	tmp = *ht->array;
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(tmp->key);
		free(tmp->value);
		free(tmp);
		return (0);
	}
	new->key = tmp->key;
	new->value = tmp->value;
	tmp = *ht->array;
	new->next = tmp;
	tmp = new;
	
	return (1);
}








		



