#include <stdio.h>

int write(int filedes, const char *buf, unsigned int nbyte);
/**
 * main - Entry point
 * @argc: number of arguments to main
 * @argv: pointer to pointer containing addresses of the arguments
 *
 * Return: 1
 */
int main(int argc, char **argv)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      64);

	return (1);
}
