#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j, n = 10;

for (i = 0; i < n - 1; i++)
{
for (j = i + 1; j < n; j++)
{
putchar(i + '0');
putchar(j < n - 1 ? ',' : '\n');
putchar(j < n - 1 ? ' ' : '\0');
}
}
return (0);
}

