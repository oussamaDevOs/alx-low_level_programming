#include "main.h"
#include <stdlib.h>

/**
 * _malloc_checked - checks for allocation
 * @b: integer
 * Rerturn: 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
}
