#include "main.h"

/**
 * main - entry point
 * @argc: counter
 * @argv: vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int r;

	if (argc >= 3)
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
