#include "lists.h"

/**
 * _strlen - checks the str
 * @str: a node in h
 * Return: depends
 */

int _strlen(char *str)
{
	int i = 0;

	if (!str)
	{
		printf("[0] (nil)");
		return (0);
	}
	while (*str++)
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
	printf("[%d] (%s)\n", h->len, h->str);
	i++;
	h = h->next;
	}
	return (i);
}
