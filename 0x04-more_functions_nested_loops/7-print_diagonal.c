#include "main.h"

/**
 * print_diagonal - prints spaces diagnoacally
 * @n: integer
 */

void print_diagonal(int n)
{
	int space, line;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (line = 1; line <= n; line++)

		{
			for (space = 1; space <= line; space++)
				putchar(' ');
			putchar(92); /* \ in ASCII*/
			putchar('\n');
		}
	}
}

