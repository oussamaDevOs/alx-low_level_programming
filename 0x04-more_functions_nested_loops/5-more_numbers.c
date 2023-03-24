#include "main.h"

/**
 * print_numbers -  function that prints from 0 to 9
 *
 *
 */

void more_numbers(void)
{
	int digit;
	int line;
	int num;

	for (line = 0; line <= 10; line++)
	{
		for (digit = 0; digit  <= 14; digit++)
		{
			num = digit;
			if (num > 9)
			{
				putchar(1 + 48);
				num = digit % 10;
			}
			
			putchar(digit + 48);
			
		}
		putchar('\n');
	}
}
