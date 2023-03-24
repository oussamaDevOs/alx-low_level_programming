#include "main.h"

/**
 * print_diagonal - prints spaces diagnoacally
 * @n: integer
 */

void print_diagonal(int n)
{
	int space, postn;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				putchar(' ');
			putchar(92); /* \ in ASCII*/
			putchar('\n');
		}
	}
}

