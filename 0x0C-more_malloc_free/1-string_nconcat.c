#include <stdlib.h>

/**
 * *string_nconcat - concatenates 2 strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes to use from s2
 *
 * Return: pointer to newly created string, else NULL if failure occurs
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int index, index2, len1, len2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	len1 = 0;
	while (*(s1 + len1))
		len1++;
	len2 = 0;
	while (*(s2 + len2))
		len2++;
	if (n >= len2)
		n = len2;
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == 0)
		return (0);
	for (index = 0; index < len1; index++)
		*(str + index) = *(s1 + index);
	for (index2 = 0; index2 < n; index2++, index++)
		*(str + index) = *(s2 + index2);
	*(str + index) = '\0';
	return (str);
}
