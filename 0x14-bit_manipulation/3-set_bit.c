#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: address of the number to alter
 * @index: index of the bit to change
 *
 * Return: 1 if success else 0
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits;
	unsigned long int mask;
	unsigned long int num = *n;

	/* check if index out of range */
	while (num > 1)
	{
		bits++;
		num = num >> 1;
	}
	if (index > bits)
		return (-1);

	mask = 1 << index;
	*n |= mask;
	return (1);
}
