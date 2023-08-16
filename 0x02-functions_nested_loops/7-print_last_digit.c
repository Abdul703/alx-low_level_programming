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

/* check if the number is -ve, then convert it to +ve */
if (last_digit < 0)
{
	last_digit *= -1;
}

/* print and return the last digit */
_putchar(last_digit + '0');
return (last_digit);
}
