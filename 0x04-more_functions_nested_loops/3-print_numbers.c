#include "main.h"

/**
 * print_numbers -  function that prints from 0 to 9
 *
 *
 */

void print_numbers(void)
{
	int digit = 0;

	do {
		putchar(digit + 48);
		digit++;
	} while (digit >= 0 && digit <= 9);

		putchar('\n');
}
