#include "main.h"

/** 
 * main - check the code.
 *
 * Return: always 0.
 */
int main(void)
{
	long int num = 612852475143;
	int factor = 2;
	int largest_factor = 0;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			largest_factor = factor;
			num /= factor;
			while (num % factor == 0)
			{
				num /= factor;
			}
		}
		factor++;
	}

	printf("%d\n", largest_factor);

	return (0);
}

