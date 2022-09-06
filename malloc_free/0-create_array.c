#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - function that create an array dinamically using malloc.
 * @size: size of the array.
 * @c: character of the array.
 *
 * Return: NULL if the function fails or size is equal 0, an array otherwise.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		if (size == 0 || ar == 0)
		{
			return (NULL);
		}
		ar[i] = c;
	}
	return (ar);
}
