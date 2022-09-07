#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to 2 dimensional array
 * @width: determine quantity of columns.
 * @height: determine quantity of rows.
 *
 * Return: enough memory in the heap for the array, NULL otherwise.
 */
int **alloc_grid(int width, int height)
{
	int c, **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(width * sizeof(int *));
	for (c = 0; c < width; c++)
	{
		if (ptr == 0)
		{
			return (NULL);
		}
		ptr[c] = malloc(height * sizeof(int));
	}
	return (ptr);
}

