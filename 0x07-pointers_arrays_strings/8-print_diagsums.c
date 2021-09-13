#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 *
 * @a: 2-dimensional array
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, len, diag_sum = 0;

	len = size * size;
	while (i < len)
	{
		diag_sum += a[i];
		i += size + 1;
	}
	printf("%d, ", diag_sum);
	i = size - 1;
	diag_sum = 0;
	while (i < len - size + 1)
	{
		diag_sum += a[i];
		i += size - 1;
	}
	printf("%d\n", diag_sum);
}
