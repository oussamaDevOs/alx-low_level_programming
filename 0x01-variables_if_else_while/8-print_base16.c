#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
char r = 'a';
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
while (r <= 'f')
{
putchar(r);
r++;
}
putchar('\n');
return (0);
}

