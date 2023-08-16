#include "main.h"

/**
 * print_last_digit - printing the last digit of a number
 *
 * @num: number to print the last digit
 *
 * Return: the last digit of @num
 */
int print_last_digit(int num)
{
int last_digit = num % 10;

_putchar(last_digit);
return (last_digit);
}
