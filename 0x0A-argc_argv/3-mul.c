#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers
 *
 * @argc: count arguments
 * @argv: string arguments
 *
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{

if (argc > 2)
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
