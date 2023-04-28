#include "lists.h"

/**
 * list_len - checks the number of elements
 * @h: list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
