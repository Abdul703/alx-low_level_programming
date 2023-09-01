#include <stdio.h>
#include <stdlib.h>

/**
 * main - add numbers
 *
 * @argc: count arguments
 * @argv: string arguments
 *
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
int cents = atoi(argv[1]);

if (argc == 2)
{
	printf("%d\n", 1);
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
