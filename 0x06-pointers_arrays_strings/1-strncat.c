#include "main.h"
#include <string.h>

/**
 *_strncat - functio
 *@dest: string
 *@src: string
 *@n: integer
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int c, i;

	c = 0;

	while (dest[c])
	c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';
}
