#include "main.h"

/**
 *
 *
 *
 */

char *cap_string(char *str)

{
	int i;

	if (islower(str[0]))
	{
		str[0] = toupper(str[0]);
	}
	return (str);
}
