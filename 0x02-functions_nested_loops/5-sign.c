#include "main.h"

/**
 *
 * _sign - finds and prints the sign of a given number
 *
 * @n: number given 
 *
 * return: return 1 if positvie return -& if negative otherwise always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
