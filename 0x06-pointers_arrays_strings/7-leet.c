#include "main.h"

/**
 * _leet - encode
 * @str: string
 */

char *leet(char *str)
{
	static char table[] = {
	['a'] = '4',
	['A'] = '4',
	['e'] = '3',
	['E'] = '3',
	['o'] = '0',
	['O'] = '0',
	['t'] = '7',
	['T'] = '7',
	['l'] = '1',
	['L'] = '1',
	};

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; j < sizeof(table); j++)
	{
			if (table[j] != '\0' && str[i] == j)
			{
				str[i] = table[j];
				break;
			}
		}
	}
	return str;
}

