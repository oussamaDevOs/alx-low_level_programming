#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints a variable number of integers, separated
 * @separator: The string to print between the integers
 * @n: The number of integers to print
 * Return: void
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
