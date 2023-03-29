#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: string
 */

void print_rev(char *s)
{
	while (*s != 0)
	{
		putchar(*s);
		*s--;
	}
	putchar('\n');
}
