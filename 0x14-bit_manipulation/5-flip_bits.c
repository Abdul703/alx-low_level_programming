#include "main.h"

/**
 * flip_bits - count the number of bits you would need to
 * flip to get from one number to another.
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: number of flips to do
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r = n ^ m;
	unsigned int count = 0;

	while (r > 0)
	{
		count += r & 1;
		r >>= 1;
	}

	return (count);
}
