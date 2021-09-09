#include "main.h"

/**
 *infinite_add - concatenates two strings
 *@n1: number 1
 *@n2: number 2
 *@r: pointer that contains sum of numbers
 *@size_r: size of buffer that contains sum of numbers
 *Return: the pointer with new number
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int longn1;
	int longn2;
	int bigger;
	int op;
	int ad;

	for (longn1 = 0; n1[longn1] != '\0'; longn1++)
	for (longn2 = 0; n2[longn2] != '\0'; longn2++)
	if (longn1 >= longn2)
		bigger = longn1;
	else
		bigger = longn2;
	if (size_r <= (bigger + 1))
		return (0);
	while (bigger > 0)
	{
		if (longn1 >= 0 && longn2 >= 0)
		{
			op = (*(n1 + longn1) - '0') + (*(n2 + longn2) - '0') + ad;
		}
		else
		{
			if (longn1 < 0 && longn2 >= 0)
				op = (*(n2 + longn2) - '0') + ad;
			else
			{
				if (longn1 >= 0 && longn2 < 0)
					op = (*(n1 + longn1) - '0') + ad;
			}
		}
	*(r + bigger) = (op % 10) + '0';
	ad = op / 10;
	longn1--;
	longn2--;
	bigger--;
	}
	if (*(r + 0) == 0)
		return (r + 1);
	r[bigger + 1] = '\n';
	return (r);
}
