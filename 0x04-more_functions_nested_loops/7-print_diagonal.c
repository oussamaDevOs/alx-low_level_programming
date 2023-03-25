#include "main.h"

/**
 * print_diagonal - duh
 * @n: integer
 */

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
	{
	putchar('\n');
	}

	for (postn = 1; postn <= n; postn++)
	{
		for (space = 1; space <= postn - 1; space++)
			putchar(' ');
		putchar(92);
		putchar('\n');
	}
}
