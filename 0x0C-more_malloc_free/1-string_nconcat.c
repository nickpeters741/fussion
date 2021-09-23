#include <stdlib.h>
/**
  * string_nconcat - concatenates two strings.
  * @s1: pointer to first string.
  * @s2: pointer to second string from which we'll take first n bytes.
  * @n: n bytes of s2.
  *
  * Return: pointer to newly allocated space in memory.
  * NULL if malloc fails.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr;
	unsigned int len1, len2, size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;
	size = len1 + n;

	nstr = malloc((sizeof(char) * size) + 1);
	if (nstr == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size)
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	nstr[i] = '\0';
	return (nstr);
}
