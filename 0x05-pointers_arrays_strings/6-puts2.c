#include "main.h"
#include<string.h>

/**
 * puts2 - prints a string
 * @str: string
 */

void puts2(char *str)
{

	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}

	}
	putchar('\n');
}
