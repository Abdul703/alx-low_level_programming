#include "main.h"

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
_puts(argv[0]);
return (0);
}

/**
 * _puts - print a string with a newline
 *
 * @str: the string
 *
 * Return: void
 */
void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str);
++str;
}
_putchar('\n');
}
