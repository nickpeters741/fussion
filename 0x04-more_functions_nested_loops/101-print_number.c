#include "main.h"

/**
 * print_number - prints a number using _putchar
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int un = 0;

	if (n < 0)
	{
		if (n < 1000000000)
			n = -n;
		un = n;
		_putchar(45);
		num_to_char(n);
	}
	else
	{
		un = n;
		num_to_char(un);
	}
}

/**
 * num_to_char - transforms a number with 1 or more digits into a char
 * @n: number to print
 *
 * Return: void
 */
void num_to_char(unsigned int n)
{
	unsigned int d = 10;

	if (n < d)
	{
		_putchar('0' + n);
	}
	else
	{
		while (n >= d)
		{
			d *= 10;
			if (d == 1000000000)
				break;
		}
		if (!(d == 1000000000) || n == 123456789)
			d /= 10;
		_putchar('0' + n / d);
		while (d != 10)
		{
			d /= 10;
			_putchar('0' + (n / d) % 10);
		}
		_putchar('0' + n % 10);
	}
}
