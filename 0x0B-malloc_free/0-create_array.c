#include "main.h"
#include <stdlib.h>

/**
 *create_array - a function that creates a new array
 *@size: integer
 *@c: string
 *Return: depends
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	unsigned int i;
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	return (arr);
}
