#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
	printf("%u is negative", n);
else
	printf("%u is positive", n);
return (0);
}

