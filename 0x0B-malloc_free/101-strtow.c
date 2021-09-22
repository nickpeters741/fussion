#include <stdlib.h>
#include <stdio.h>

/**
 * wordnos - counts no of words in a given string
 * @str: pointer to the string
 *
 * Return: No. of words in the string (int)
 */
int wordnos(char *str)
{
	int wordno, i, j;

	wordno = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != 32 && *(str + i) != '\0')
		{
			j = i;
			while (*(str + j) != 32 && *(str + j) != '\0')
				j++;
			wordno++;
			i = j - 1;
		}
		i++;
	}
	return (wordno);
}

/**
 * cpystr - copies words in string to different elements of 2d array of strings
 * @s: double pointer to a 2D array of strings
 * @str: pointer to string whose words are to be copied
 *
 * Return: void
 */
void cpystr(char **s, char *str)
{
	int i, j, l, idx;

	i = 0;
	idx = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != 32 && *(str + i) != '\0')
		{
			j = i;
			l = 0;
			while (*(str + j) != 32 && *(str + j) != '\0')
			{
				s[idx][l] = *(str + j);
				l++;
				j++;
			}
			s[idx][l] = '\0';
			idx++;
			i = j;
		}
		i++;
	}
}

/**
 * strtow - splits a string into words and stores the words in an array
 * @str: pointer to string
 *
 * Return: double pointer to the array containing the words
 */
char **strtow(char *str)
{
	char **s;
	int wordno, i, j, k, length, idx;

	if (str == NULL || str[0] == '\0')
		return (0);
	wordno = wordnos(str);
	s = (char **)malloc(sizeof(char *) * (wordno + 2));
	if (s == 0 || wordno == 0)
		return (0);
	idx = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != 32 && *(str + i) != '\0')
		{
			j = i;
			length = 0;
			while (*(str + j) != 32 && *(str + j) != '\0')
			{
				length++;
				j++;
			}
			*(s + idx) = (char *)malloc(sizeof(char) * (length + 1));
			if (*(s + idx) == 0)
			{
				for (k = 0; k < idx; k++)
					free(*(s + k));
				free(s);
				return (0);
			}
			idx++;
			i = j;
		}
		i++;
	}
	cpystr(s, str);
	s[wordno] = '\0';
	return (s);
}
