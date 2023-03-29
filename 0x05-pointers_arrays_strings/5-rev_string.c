#include "main.h"
#include<string.h>

/**
 *rev_string - revers a string
 *@s: string
 */

void rev_string(char *s)
{
	size_t l;
	int i;
	char temp;

	for (l = 0; s[l] != 0; ++l)
		;
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
