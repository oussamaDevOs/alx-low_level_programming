#include "main.h"

/**
 * print_most_numbers -  function that prints from 0 to 9 except 2 and 4
 *
 *
 */

void print_most_numbers(void)
{
	int digit = 0;

	do {
		putchar(digit + 48);
		digit++;
	} while ((digit >= 0 && digit <= 9) && (digit != 2 && digit != 4));

		putchar('\n');
}
