#include "lists.h"

/**
 * free_list - frees a list
 * @head: the list
 */

void free_list(list_t *head)
{
	lit_t *a *b;

	a = head;

	while (a != NULL)
	{
		b = a->next;

		free(a->str);
		free(a);
		a = b;
	}

}
