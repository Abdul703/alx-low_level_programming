#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 if little endianne and 0 if big endianne
*/
int get_endianness(void)
{
	int num = 1;
	char *num_bit_array = (char *)&num;

	return (*num_bit_array);
}
