#include "main.h"

/**
 * _strchr - locate character in string
 * @s: pointer to string to search
 * @c: character to search for
 *
 * Return: pointer to the first occurrence of character c in string s,
 * or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}

	if (*s == c)
	{
	return (s);
	}

	return (NULL);
}
