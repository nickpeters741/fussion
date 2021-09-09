#include "main.h"

/**
 * leet - converts string to leet
 *
 * @c: character string pointer
 * Return: char pointer
 */
char *leet(char *c)
{
	int i = 0, j;
	char a[] = {'a', 'e', 'o', 't', 'l'}, b[] = {'A', 'E', 'O', 'T', 'L'},
	leet[] = {'4', '3', '0', '7', '1'};

	while (c[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (c[i] == a[j] || c[i] == b[j])
				c[i] = leet[j];
			j++;
		}
		i++;
	}
	return (c);
}
