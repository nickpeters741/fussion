#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 48, a = 48, i = 48;

	while (d < 58)
	{
		a = 48;
		while (a < 58)
		{
			i = 48;
			while (i < 58)
			{
				if (d != a && a != i && d != i && d < a && a < i)
				{
					putchar(d);
					putchar(a);
					putchar(i);
					if (!(d == 55 && a == 56 && i == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
				i++;
			}
			a++;
		}
		d++;
	}
	putchar('\n');

	return (0);
}
