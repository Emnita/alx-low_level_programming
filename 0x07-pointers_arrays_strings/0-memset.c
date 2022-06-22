#include "main.h"

/**
 * _memset - fill memory
 *
 * @s: it is strings
 *
 * @b: it is char
 *
 * @n: it integer
 *
 * Return: the string
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
