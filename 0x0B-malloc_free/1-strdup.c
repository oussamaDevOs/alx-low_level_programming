#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicated string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	dup_str = malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

		return (dup_str);
}

