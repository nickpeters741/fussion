#include "main.h"

/**
 * _isupper - checks if the letter is uppercase
 * @c: interger to be checked
 * Return: 1 if c is uppercase
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
