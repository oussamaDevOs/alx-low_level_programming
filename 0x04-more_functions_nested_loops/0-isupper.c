#include "main.h"

/**
 * _isupper - detects uppercase letters
 *
 * @c: input checks input of function
 *
 * Return: Return 1 for letters and always 0 for else.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
