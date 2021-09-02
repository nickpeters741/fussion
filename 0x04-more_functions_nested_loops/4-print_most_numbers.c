#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 *
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
