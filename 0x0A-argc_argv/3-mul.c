#include "main.h"

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int a;
	int b;
	int r;

	if (scanf("%d", &a) && scanf("%d", &b))
	{
		printf("%d\n", r = a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
