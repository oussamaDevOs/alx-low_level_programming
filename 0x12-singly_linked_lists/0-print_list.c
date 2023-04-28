#include "lists.h"

/**
 * _strlen - checks the str
 * @st: a node in h
 * Return: depends
 */

int _strlen(char *st)
{
	int i = 0;

	if (!st)
	{
		return (0);
	}
	while (*st++)
		i++;
	return (i);
}


/**
 * print_list - prints the elements of a list
 * @h: constant
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
	printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
	i++;
	h = h->next;
	}
	return (i);
}
