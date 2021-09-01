#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 *@n: integer whose last digit we want to find
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -1 * (n % 10);
		_putchar(last_digit + 48);
		return (last_digit);
	}
	else
	{
		last_digit = n % 10;
		_putchar(last_digit + 48);
		return (last_digit);
	}
}
