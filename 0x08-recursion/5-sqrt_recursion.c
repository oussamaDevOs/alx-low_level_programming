#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Error checking */
		return (-1);

	return (_sqrt_helper(n, 0, n));
}

/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * @n: the number to find the square root of
 * @start: the starting point for the search
 * @end: the ending point for the search
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int start, int end)
{
	if (end < start) /* Base case */
		return (-1);

	int mid = start + (end - start) / 2;
	int square = mid * mid;

	if (square == n) /* Base case */
		return (mid);
	else if (square > n) /* Search the left half */
		return (_sqrt_helper(n, start, mid - 1));
	else /* Search the right half */
		return (_sqrt_helper(n, mid + 1, end));
}
