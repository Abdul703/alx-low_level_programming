#include "main.h"

/**
 * _memcpy - copies nth bytes from one memory location to another
 *
 * @dest: pointer destination of the copied
 * @src: the pointer to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to the result
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	*(dest + i) = *(src + i);
}

return (dest);
}
