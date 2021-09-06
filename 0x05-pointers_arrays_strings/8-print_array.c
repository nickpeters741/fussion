#include <stdio.h>

/**
 * print_array - prints first n elements of array
 * @a: int array to display from
 * @n: number of elements to display
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
		i++;
	}
	printf("\n");
}
