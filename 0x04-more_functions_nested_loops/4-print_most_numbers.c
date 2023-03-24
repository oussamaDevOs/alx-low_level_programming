#include "main.h"

/**
 * print_most_numbers -  function that prints from 0 to 9 except 2 and 4
 *
 *
 */

void print_most_numbers(void)
{
	int digit = 0;

	for (digit = 0; digit < 10; digit++)
	{
		if (digit == 2 || digit == 4)
			continue;
		_putchar(digit + 48);
	}
		_putchar('\n');
}
