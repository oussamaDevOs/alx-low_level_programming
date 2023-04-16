#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 if successful, 1 if an error occurred.
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		j++;
	}

	int num = atoi(argv[i]);

	if (num < 0)
	{
		printf("Error\n");
		return (1);
	}

		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
