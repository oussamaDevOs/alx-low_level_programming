#include "main.h"
/**
 * _islower - detects lowercase letters
 *
 *@c: checks input function Based on ASCII
 *
 *Return: 1 for letters and always 0 for else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
