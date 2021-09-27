#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the the name of the file it was compiled from,
 * followed by a new line
 *
 * Return: 0 on success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
