#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the opcodes of the main function
 *
 * @argc: Number of arguments
 * @argv: Pointer to the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char *mainPtr;
	int i, number_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	mainPtr = (char *)&main;
	number_of_bytes = atoi(argv[1]);

	for (i = 0; i < number_of_bytes - 1; i++)
	{
		printf("%02hhx ", mainPtr[i]);
	}

	printf("%02hhx\n", mainPtr[i]);
	return (0);
}
