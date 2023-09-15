#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry
 *
 * @argc: number
 * @argv: arrays
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int result;

	/* Checks if the number of command-line arguments is correct. */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
