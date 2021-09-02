#include "main.h"
/**
 * _isupper - cheack upper case laters
 * @c: character to be cheak
 * Return: Always 1 and 0 (Success)
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
