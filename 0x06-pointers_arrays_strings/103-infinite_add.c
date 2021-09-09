#include "main.h"

/**
 * infinite_add - function to add numbers and return result in pointer
 *
 * @n1: addend 1
 * @n2: addend 2
 * @r: buffer for result
 * @size_r: size of buffer
 * Return: string pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	long int num1, num2, res;
	int count = 0;

	num1 = str_to_int(n1);
	num2 = str_to_int(n2);
	res = num1 + num2;
	while (res > 0)
	{
		count++;
		res /= 10;
	}
	if (count + 1 > size_r)
		return (0);
	else
		return (int_to_str(num1 + num2, r, count));
}

/**
 * str_to_int - function to convert string digits to int
 *
 * @str: string of numeric digits
 * Return: int
 */
long int str_to_int(char *str)
{
	long int num = 0, i, dec = 1;

	i = 1;
	while (str[i] != '\0')
	{
		dec *= 10;
		i++;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		num += (str[i] - '0') * dec;
		dec /= 10;
	}
	return (num);
}

/**
 * int_to_str - function to convert int to string
 *
 * @num: integer to convert
 * @str: string to write to
 * @count: number of digits
 * Return: pointer string
 */
char *int_to_str(long int num, char *str, int count)
{
	str[count] = '\0';
	while (count > 0)
	{
		if (count == 1)
			str[count - 1] = '0' + num;
		else
			str[count - 1]  = '0' + (num % 10);
		num /= 10;
		count--;
	}
	return (str);
}
