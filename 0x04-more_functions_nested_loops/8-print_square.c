#include  "main.h"

/**
 * print_square - what it says
 * @size: yep
 */

void print_square(int size)

{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= row; column++)
			putchar(35);
		putchar('\n');
	}
}

