#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: copy destination
 * @src: copy source
 * @n: bytes of memory to copy
 * Return: pointer to modified string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
