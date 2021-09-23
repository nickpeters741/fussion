#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: first n bytes of s2
 * Return: void pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len = 0, lens1;
	char *str;

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			len++;
	lens1 = len;
	if (s2 != NULL)
	{
		if (sizeof(s2) > n)
			for (i = 0; i < n; i++)
				len++;
		else
			for (i = 0; s2[i] != '\0'; i++)
				len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
	if (s2 != NULL)
		for (; i < len; i++)
			str[i] = s2[i - lens1];
	return (str);
}
