#include "main.h"

/**
 * _memset - fills memory
 * @s: string
 * @b: string
 * @n: string
 * Return: ptr
 */

char *_memset(char *s, char b, unsigned int n)

{
	char *ptr = s;

	while (n--)
	*s++ = b;
	return (ptr);
}
