#include "main.h"

/**
 * print_times_table - function that prints times table for a given number
 *@n: the given number to create the times table
*/
void print_times_table(int n)
{
	int a = 0, b = 0;

	if (n >= 0 && n < 16)
	{
		while (a <= n)
		{
			b = 0;
			while (b <= n)
			{
				if (a * b < 10)
					comma_spaces_nums(1, a, b);
				else if (a * b > 9 && a * b < 100)
					comma_spaces_nums(2, a, b);
				else
					comma_spaces_nums(3, a, b);
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}

/**
 * comma_spaces_nums - prints commas, spaces and digits accordingly
 * @dig: digit value
 * @a: first multiplier
 * @b: second multiplier
*/
void comma_spaces_nums(int dig, int a, int b)
{
	if (b != 0)
	{
		int i;

		_putchar(',');
		if (dig == 1)
			for (i = 0; i < 3; i++)
				_putchar(' ');
		else if (dig == 2)
			for (i = 0; i < 2; i++)
				_putchar(' ');
		else
			_putchar(' ');
	}
	if (dig == 1)
	{
		_putchar('0' + a * b);
	}
	else if (dig == 2)
	{
		_putchar('0' + ((a * b) / 10));
		_putchar('0' + ((a * b) % 10));
	}
	else
	{
		_putchar('0' + ((a * b) / 100));
		_putchar('0' + ((a * b) / 10) % 10);
		_putchar('0' + ((a * b) % 10));
	}
}
