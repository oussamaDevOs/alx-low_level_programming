#include "main.h"

/**
 * print_line - print _ n times
 * @n: integer
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (line = 1; line <= n; line++)
			putchar (95);
		putchar('\n');
	}
}
