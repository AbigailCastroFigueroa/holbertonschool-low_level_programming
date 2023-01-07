#include "search_algos.h"
/**
 * linear_search - write a function that searches for a value in an array
 *                 of integers using the linear search algorithm
 * @array: array given
 * @size: size of the array.
 * @value: value to be search in the array.
 *
 * Return: the index where the value it's found, -1 if fails.
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size && array[i] != value; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	if (array[i] == value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		return (i);
	}
	return (-1);
}

