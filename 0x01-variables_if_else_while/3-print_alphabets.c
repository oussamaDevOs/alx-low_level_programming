#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char l = 'a';

while (l <= 'z')
{
putchar(l);
l++;
}
char U = 'A';

while (U <= 'Z')
{
putchar(U);
U++;
}
putchar('\n');
	return (0);
}
