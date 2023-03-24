#include "main.h"

/**
 * print_diagonal - prints spaces diagnoacally
 * @n: integer
 */

void print_diagonal(int n)
{
	int space;

	if (n == 0)
		putchar('\n');
	else
	{
		for (space = 1; space <= n; space++)
		{
			putchar(' ');
		}
		putchar(92);
		putchar('\n');
	}
}

