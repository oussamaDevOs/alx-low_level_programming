#include "main.h"
#include<string.h>

/**
 *puts_half - half a string
 *@str: string
 */

void puts_half(char *str)
{
	int i;

	for (i /= 2; str[i] != 0; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
