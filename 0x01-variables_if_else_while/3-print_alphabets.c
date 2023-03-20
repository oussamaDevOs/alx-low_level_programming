#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char r, Upper;

r = 'a';
while (r <= 'z')
{
putchar(r);
r++;
}

Upper = 'A';
while (Upper <= 'Z')
{
putchar(Upper);
Upper++;
}

putchar('\n');

return (0);
}
