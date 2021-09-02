#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factorial of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int max = -1, n = 612852475143;
	int i = 3;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	while (i <= sqrt(n))
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
		i += 2;
	}
	if (n > 2)
		max = n;
	printf("%ld\n", max);
	return (0);
}
