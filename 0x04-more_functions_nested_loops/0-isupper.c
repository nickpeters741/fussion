#include "main.h"

/**
 * _isupper - returns whether a character ASCII is uppercase or not
 *@c: character ASCII to check
 *
 * Return: 1 if it is uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
