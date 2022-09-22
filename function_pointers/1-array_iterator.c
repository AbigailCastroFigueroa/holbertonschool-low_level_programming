#include "function_pointers.h"
/**
 * array_iterator - execute a function on each element of an array
 * @array: array given
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}


