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

char Upper = 'A';
while (Upper <= 'Z')
{
putchar(Upper);
Upper++;
}

putchar('\n');

return (0);
}
