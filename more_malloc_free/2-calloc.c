#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocate memory for an array using malloc.
 * @nmemb: amount of memory bytes.
 * @size: bytes size.
 *
 * Return: a pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (0);
	
	while (p[i])
	{
		p[i] = 0;
	}
	i++;
	return (p);
}
