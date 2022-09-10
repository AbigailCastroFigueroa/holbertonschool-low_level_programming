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
	int c, i, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int *));
	for (c = 0; c < height; c++)
	{
		if (ptr == NULL)
		{
			while (c < height)
			{
				free(ptr[c]);
				c--;
			}
				free(ptr);
			return (0);
		}
		ptr[c] = malloc(width * sizeof(int));
		for (i = 0; i < width; i++)
		{
			ptr[c][i] = 0;
		}
	}
	return (ptr);
}

