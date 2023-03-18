#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * return: always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%u is positive", n);
	else if (n == 0)
		printf("%u is zero", n);
	else
		printf("%u is negative", n);
	return (0);
}
