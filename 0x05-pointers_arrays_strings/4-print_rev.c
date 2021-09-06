#include "main.h"

/**
 * print_rev - prints given string in reverse
 *
 * @s: passed pointer argument for string
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	len--;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
