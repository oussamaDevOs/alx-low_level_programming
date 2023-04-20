#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - the function pointer
 * @name:where we put the name
 * @f: the pointer
 */


void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
