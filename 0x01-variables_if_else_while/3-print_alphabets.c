#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char r = 'a';

while (r <= 'z')
{
putchar(r);
r++;
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
