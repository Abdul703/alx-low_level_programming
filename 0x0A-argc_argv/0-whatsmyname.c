#include <stdio.h>

/**
 * main - prints name of the program
 *
 * @argc: count arguments
 * @argv: string arguments
 *
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
(void)argc;

printf("%s\n", argv[0]);
return (0);
}
