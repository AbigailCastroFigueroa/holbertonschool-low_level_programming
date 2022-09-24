#include "function_pointers.h"

/**
 * int_index - a function that search for an integer
 * @array: array given
 * @size: size of the array
 * @cmp: pointer to a function that compare values
 *
 * Return: -1 if there's no match or size is less or
 *        equal to 0, return the index of the first
 *        element for which the function used does
 *        not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (array && cmp)
			{
				if (cmp(array[i]))
				return (i);
			}
		}
	}
	return (-1);
}
