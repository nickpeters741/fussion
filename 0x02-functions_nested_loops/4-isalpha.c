#include "main.h"

/**
 * _isalpha - checks whether or not a character is an alphabet
 * @c: ascii value
 * Return: 1 if it is lowercase or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 65 && c <= 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
