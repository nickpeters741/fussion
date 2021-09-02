#include "main.h"

/**
 * print_triangle - prints triangle using "#" character of a given size
 *@size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1, a = 0;

	if (size > 0)
	{
		if (size == 1)
		{
			_putchar(35);
			_putchar('\n');
		}
		else
		{
			while (i <= size)
			{	a = 0;
				while (a < size - i)
				{
					_putchar(' ');
					a++;
				}
				a = 0;
				while (a < i)
				{
					_putchar(35);
					a++;
				}
				_putchar('\n');
				i++;
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
