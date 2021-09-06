#include "main.h"

/**
 * _atoi - converts numbers in string to ints
 * @s: pointer to string
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, first_digit, last_digit, dig = 1;
	unsigned int num = 0;

	/* Find first and last numeric digit as well as sign if there is a number*/
	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
			sign *= -1;
		if (*(s + i) > 47 && *(s + i) < 58)
		{
			if (!(*(s + i - 1) > 47 && *(s + i - 1) < 58))
				first_digit = i;
			if (!(*(s + i + 1) > 47 && *(s + i + 1) < 58))
			{
				last_digit = i;
				break;
			}
		}
		i++;
	}
	/* Find the number of digits of the number if it exists */
	i = first_digit;
	while (i < last_digit)
	{
		dig *= 10;
		i++;
	}
	i = first_digit;
	while (i <= last_digit)
	{
		num += (*(s + i) - '0') * dig;
		dig /= 10;
		i++;
	}
	num *= sign;
	return (num);
}
