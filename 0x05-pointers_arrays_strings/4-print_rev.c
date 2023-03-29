#include "main.h"
#include<string.h>

/**
 * print_rev - prints in reverse
 * @s: string
 */

void print_rev(char *s)
{
	size_t length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; --i)
	{
	putchar(s[i]);
	}
	putchar('\n');
}
