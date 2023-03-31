#include "main.h"

/**
 * reverse_array - reverse
 * @a: array
 * @n: array
 * Return: always 0
 */

void reverse_array(int *a, int n)

{
	int i, j, temp;

	for (i = 0, j = (n - 1); i < j; j++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

}
