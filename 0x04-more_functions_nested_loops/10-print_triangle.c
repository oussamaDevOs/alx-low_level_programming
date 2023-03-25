#include "main.h"

/**
 * print_triangle - what it says
 * @size: of the triangle
 */

void print_triangle(int size)
{
	int h;
	int b;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (b = 1; b <= 0; b++)
			{
				if ((h + b) <= size)
					putchar(' ');
				else
					putchar('#');
			}
			putchar('\n');
		}
	}
}
