#include "main.h"

/**
 * _strncpy - function to copy string
 *
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of chars to copy
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			for (j = i; j < n && dest[j] != '\0'; j++)
				dest[j] = '\0';
			break;
		}
		dest[i] = src[i];
	}
	return (dest);
}
