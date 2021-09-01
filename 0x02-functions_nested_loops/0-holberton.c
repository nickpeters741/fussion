#include "holberton.h"

/**
*main - prints the word Holberton
*
*Return: 0 on success execution.
*/

int main(void)
{
	char name[9]  = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);
}
