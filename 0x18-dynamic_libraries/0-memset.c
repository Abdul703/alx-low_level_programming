#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 *
 * @s: pointer to memory area to fill
 * @b: character to fill with
 * @n: number of bytes to fill
 *
 * Return: pointer to the result
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	*(s + i) = b;
}

return (s);
}
