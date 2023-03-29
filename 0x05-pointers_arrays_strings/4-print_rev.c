#include "main.h"
#include<string.h>

/**
 * print_rev - prints in reverse
 * @s: string
 */

void print_rev(char *s)
{
	size_t length = strlen(s);

	while (*s >= length)
	{
		putchar(*s);
		*s--;
	}
	putchar('\n');
}
