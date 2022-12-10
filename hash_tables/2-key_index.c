#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 * @key: key
 * @size: is the size of the array table.
 *
 * Return: return the index where the key and value are stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0 || key == NULL)
		return (0);
	return (hash_djb2(key) % size);
}
