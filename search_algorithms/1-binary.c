#include "search_algos.h"
/**
 * binary_search - search for a value in a sorted array
 * @array: array given
 * @size: size of the array
 * @value: value to be search
 *
 * Return: index where the value is found, -1 if fails
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, half, i;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right + 1; i++)
		{
			if ((i > left) && (i <= right))
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		half = ((left + right) / 2);
		if (array[half] > value)
			right = half - 1;
		else if (array[half] < value)
			left = half + 1;
		else if (value == array[half])
			return (half);
	}
	return (-1);
}
