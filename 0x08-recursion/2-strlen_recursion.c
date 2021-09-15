#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = _strlen_recursion(s + 1);
	return (len + 1);
}
