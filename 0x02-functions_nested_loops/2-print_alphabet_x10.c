#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	for (int i = 0; i < 10; i++)
{
	for (char c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
	putchar('\n');
}
}

	int main(void)
{
	print_alphabet_x10();

	return (0);
}

