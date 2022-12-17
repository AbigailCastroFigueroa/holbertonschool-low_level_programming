
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
	unsigned long int index_of_key;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);

	index_of_key = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index_of_key];
	for ( ; tmp != NULL; )
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
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
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = tmp;
	tmp = new;
	return (1);
}
