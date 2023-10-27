#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: address of the number to alter
 * @index: index of the bit to change
 *
 * Return: 1 if success else 0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int total_bits = 0;

	/* check if index out of range */
	total_bits = sizeof(unsigned long int) * 8;
	if (index >= total_bits)
		return (-1);

	mask = ~(1 << index);
	*n &= mask;
	return (1);
}
