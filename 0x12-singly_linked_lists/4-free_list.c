#include "lists.h"

/**
 * free_list - frees a list
 * @head: the list
 */

void free_list(list_t *head)
{
	list_t *add_node = head;
	while (head != NULL)
	{
		list_t *next = add_node->next;
		free(add_node->str);
		free(add_node);
		add_node = next;
	}
	free(head);
}
