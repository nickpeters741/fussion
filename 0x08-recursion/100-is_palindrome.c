#include "main.h"

/**
 * wildcmp - returns 1 if strings match and 0 if not
 *
 * @s1: string 1
 * @s2: string 2
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 && *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (!*s1 && !*s2)
		return (1);
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
		if (*(s1 + 1) && !*s2)
			return (0);
	}
	return (0);
}
