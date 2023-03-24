#include "main.h"

/**
 * print_diagonal - prints spaces diagnoacally
 * @n: integer
 */

void print_diagonal(int n)
{
	int space;
	int line;

	if (n == 0)
		putchar('\n');
	else
	{
		for (line = 1; line <= 10; line++)

		{
		for (space = 1; space <= n; space++)
		{
			putchar(' ');
		}
		putchar(92);
		putchar('\n');
		}
	}
}

