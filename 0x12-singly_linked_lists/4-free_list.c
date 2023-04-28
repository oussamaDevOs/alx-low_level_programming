#include "lists.h"

/**
 * free_list - frees a list
 * @head: the list
 */

void free_list(list_t *head)
{
	list_t *current = head;
	while (head != NULL)
	{
		list_t *next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
