#include "main.h"

/**
 * get_bit - get bit at given index from given binary
 *
 * @n: decimal number to find bit
 * @index: index of the bit to find
 *
 * Return: bit of the given index or -1 if failed
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = 0;
	unsigned long int num = n;
	int bit;

	/* check if index out of range */
	while (n > 1)
	{
		bits++;
		n = n >> 1;
	}
	if (index > bits)
		return (-1);

	bit = (num >> index) & 1 ? 1 : 0;
	return (bit);
}
