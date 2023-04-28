#include "lists.h"



void _message(void) __attribute__ ((constructor));

/**
 * _first_message - prints before main
 */

void _message(void)
{
	while(1)
		printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");

}

