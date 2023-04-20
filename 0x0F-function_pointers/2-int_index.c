#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Returns the index of the first element
 * @array: The array to be searched.
 * @size: The number of elements
 * @cmp: A function pointer to the function
 * Return: depends
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
