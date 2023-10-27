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
	unsigned int bit, total_bits = 0;

	/* check if index out of range */
	total_bits = sizeof(unsigned long int) * 8;
	if (index >= total_bits)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
