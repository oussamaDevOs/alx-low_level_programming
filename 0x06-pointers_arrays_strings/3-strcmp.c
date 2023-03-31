#include "main.h"

/**
 *_strcmp - string comparison
 *@s1: string
 *@s2: string
 *Return: value
 */

int _strcmp(char *s1, char *s2)
{
	int value = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			value = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (value);
}
