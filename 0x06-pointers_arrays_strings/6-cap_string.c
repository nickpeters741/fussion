#include "main.h"

/**
 * cap_string - capitalizes chars in a string following a separator
 *
 * @c: character string pointer
 * Return: char pointer
 */
char *cap_string(char *c)
{
	int i = 0, j,
	sep[] = {32, '\t', 11,  '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (c[0] > 96 && c[0] < 123)
		c[0] -= 32;
	while (c[i] != '\0')
	{
		if (c[i] > 96 && c[i] < 123)
		{
			j = 0;
			while (j < 14)
			{
				if (c[i - 1] == sep[j])
				{
					c[i] -= 32;
					break;
				}
				j++;
			}
		}
		i++;
	}
	return (c);
}
