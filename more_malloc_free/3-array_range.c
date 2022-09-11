#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - create an array of integers.
 * @min: minimum value given.
 * @max: maximum value given.
 *
 * Return: an array.
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min));
	if (p == NULL)
		return (NULL);

	while (i <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}


