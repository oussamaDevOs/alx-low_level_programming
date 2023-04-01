#include "main.h"
#include <stdlib.h>

/**
 * _leet - encode
 * @str: string
 */

char *leet(char *str)
{
	char *result = malloc(strlen(str) + 1);

	if (result == NULL)
	{
	printf("Error: failed to allocate memory\n");
	exit(1);
	}
	char *c;
	int i, j;

	for (i = 0, j = 0; str[i] != '\0'; i++, j++)
	{
	c = &result[j];
	if (str[i] == 'a' || str[i] == 'A')
	{
	*c = '4';
	}
	else if (str[i] == 'e' || str[i] == 'E')
	{
		*c = '3';
	}
	else if (str[i] == 'o' || str[i] == 'O')
	{
		*c = '0';
	}
	else if (str[i] == 't' || str[i] == 'T')
	{
		*c = '7';
	}
	else if (str[i] == 'l' || str[i] == 'L')
	{
		*c = '1';
	}
	else
	{
		*c = str[i];	}
	}
	result[j] = '\0';
	return (resul)t;
}

