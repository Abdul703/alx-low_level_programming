#include <unistd.h>
#include "main.h"

/**
 * _putchar - print character to stdout
 *
 * @c: character to print
 *
 * Return: always char as success
 * ..
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
_putchar('c');
return (0);
}
