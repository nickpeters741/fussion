#include <stdlib.h>
#include "main.h"

int findlength(char *str);
char *create_arrayx(int size);
int get_digit(char c);
char *find_zeros(char *str);
void product(char *prod, char *mult, int digit, int zeros);
void sums(char *final, char *tmp, int tmplen);
void printstring(char *str);

/**
 * printstring - prints a string
 * @str: string to be printed
 *
 * Return: void
 */
void printstring(char *str)
{
	char now;
	int index;

	index = 0;
	while (*(str + index))
	{
		now = *(str + index);
		_putchar(now);
		index++;
	}
}

/**
 * findlength - Find the length of a string
 * @str: The string to be measured
 *
 * Return: The length of the string
 */
int findlength(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * create_arrayx - create an array of chars and initialize it with char x
 * and adds a null terminating byte.
 * @size: Size of the array to be created
 * Description: if there's insufficient memory, exit with status of 98
 *
 * Return: pointer to the array
 */
char *create_arrayx(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);
	if (array == 0)
		exit(98);
	for (index = 0; index < (size - 1); index++)
		*(array + index) = 'x';
	*(array + index) = '\0';
	return (array);
}

/**
 * find_zeros - Iterate through a string of numbers containing leading zeros
 * until it hits a non-zero number
 * @str: The string of numbers to iterate through
 *
 * Return: Pointer to the next non-zero element
 */
char *find_zeros(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);
}

/**
 * get_digit - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 *
 * Description: If c is a non-digit, the function
 *              exits with a status of 98.
 * Return: The converted int.
 */
int get_digit(char c)
{
	int digit;
	char *error = "Error";

	digit = c - '0';
	if (digit < 0 || digit > 9)
	{
		printstring(error);
		_putchar('\n');
		exit(98);
	}
	return (digit);
}

void product(char *prod, char *mult, int digit, int zeros)
{
	int multlen, num, tens;
	char *error = "Error";

	tens = 0;
	multlen = findlength(mult) - 1;
	mult += multlen;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;

	while (zeros--)
	{
		*prod = '0';
		prod--;
	}

	for(; multlen >= 0; multlen--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printstring(error);
			_putchar('\n');
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * sums - Adds the numbers stored in two strings
 * @final: String storing the final product
 * @tmp: Next product to be added
 * @tmplen: length of tmp
 *
 * Return: void
 */
void sums(char *final, char *tmp, int tmplen)
{
	int num, rem;

	rem = 0;
	while (*(final + 1))
		final++;
	while (*(tmp + 1))
		tmp++;

	for (; *final != 'x'; final--)
	{
		num = (*final - '0') + (*tmp - '0');
		num += rem;
		*final = (num % 10) + '0';
		rem = num / 10;
		tmplen--;
		tmp--;
	}
	for (; tmplen >= 0 && *tmp != 'x'; tmplen--)
	{
		num = (*tmp - '0');
		num += rem;
		*final = (num % 10) + '0';
		rem = num / 10;
		final--;
		tmp--;
	}
	if (rem)
		*final = (rem % 10) + '0';
}

/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 *
 * Description: If the number of arguments is incorrect or one number
 *              contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *final, *prod;
	int size, index, digit, zeros;
	char *error = "Error";

	zeros = 0;
	if (argc != 3)
	{
		printstring(error);
		_putchar('\n');
		exit(98);
	}
	if (*(argv[1]) == '0')
		argv[1] = find_zeros(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = find_zeros(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	size = findlength(argv[1]) + findlength(argv[2]);
	final = create_arrayx(size + 1);
	prod = create_arrayx(size + 1);

	for (index = findlength(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		product(prod, argv[1], digit, zeros++);
		sums(final, prod, size - 1);
	}
	for (index = 0; *(final + index); index++)
	{
		if (*(final + index) != 'x')
			_putchar(*(final + index));
	}
	_putchar('\n');

	free(prod);
	free(final);
	return (0);
}
