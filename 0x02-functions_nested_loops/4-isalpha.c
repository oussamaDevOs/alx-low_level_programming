#include "main.h"

/**
 * _isalpha - detects alpha characters
 *
 * @c: input charcter  based on ASCII 
 *
 * Return: 1 for letters and 0 for else.
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
