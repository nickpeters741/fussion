#include "main.h"

/**
*main - prints the word Holberton
*
*Return: 0 on success execution.
*/

int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
