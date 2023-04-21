#include "variadic_functions.h"
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...)
{
	int i;
	
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		n =+ n;
		return (n);
	
	return (0);
}
