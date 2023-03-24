#include "main.h"

/**
 * _isdigit - detects numbers
 *
 * @c: input checks input of function
 *
 * Return: Return 1 for letters and always 0 for else.
 */

int _isdigit(int c)
{
         if (c >= 48 && c <= 57)
                return (1);
        else
                return (0);
}
