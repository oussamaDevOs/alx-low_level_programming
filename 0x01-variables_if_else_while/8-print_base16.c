#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}

char r = 'a';

while (r <= 'f')
{
putchar(r);
r++;
}
putchar('\n');

return (0);
}
