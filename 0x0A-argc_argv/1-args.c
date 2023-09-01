#include <stdio.h>

/**
 * main - prints the number of args
 *
 * @argc: count arguments
 * @argv: string arguments
 *
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
(void)argv;

printf("%d\n", argc - 1);
return (0);
}
