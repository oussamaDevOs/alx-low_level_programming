#include "main.h"
#include<string.h>

/**
 *rev_string - revers a string
 *@s: string
 */

void rev_string(char *s)
{
	size_t l = strlen(s);
	int i;

	for (i = 0; i < l / 2; ++i)
	{
	char temp = s[i];

	s[i] = s[length - 1 - i];
	s[length - 1 - i] = temp;
	}
}
