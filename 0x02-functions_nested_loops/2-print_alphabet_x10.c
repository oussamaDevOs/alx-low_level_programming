#include "main.h"

/**
 * main - Entry point
 * print alphabets 10 times
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
{
	for (c = 'a'; c <= 'z'; c++)
{
	_putchar(c);
}
	_putchar('\n');
}
}
