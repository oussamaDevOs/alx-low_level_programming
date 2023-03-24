#include "main.h"

/**
 * print_numbers -  function that prints from 0 to 9
 *
 *
 */

void print_numbers(void)
{
	int digit;
	int line;

	for (line = 0; line < 10; line++)
		for (digit = 0; digit  <= 14; digit++)
			if (digit < 10)
			{
				putchar(digit + 48);
			}
			else
			{
				putchar('1' + digit);
			}
			putchar('\n');
}
