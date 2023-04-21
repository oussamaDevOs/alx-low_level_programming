#include "variadic_functions.h"
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;

	va_list args;
	va_start(args, n);
	
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
		
	va_end(args);
	return (sum);
}
