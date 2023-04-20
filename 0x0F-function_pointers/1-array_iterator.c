#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - the function
 * @array: The array
 * @size: The size of the array.
 * @action: A function pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
                return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

