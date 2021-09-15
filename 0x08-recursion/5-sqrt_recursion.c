#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int square = 2;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (is_sqrt(n, square));
}

/**
 * is_sqrt - function to check whether it's a natural square root or not
 *
 * @n: number
 * @square: test number
 * Return: int
 */
int is_sqrt(int n, int square)
{
	if (square * square == n)
		return (square);
	else if (square * square < n)
		return (is_sqrt(n, square + 1));
	else if (square * square > n)
		return (-1);
	return (-1);
}
