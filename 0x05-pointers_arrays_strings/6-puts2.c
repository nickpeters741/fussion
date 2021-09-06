#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: string to be printed
 * Return: no return value
 */
void puts2(char *str)
{
	int x, y;

	while (*(str + y) != '\0')
		y++;
	for (x = 0; x < y; x++)
	{
		if (*(str + x) != '\0')
			_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
