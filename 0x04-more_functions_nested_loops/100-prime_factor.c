#include <stdio.h>
#include "main.h"

/**
 * is_prime - check if number is prime number
 *
 * @number: number to check
 *
 * Return: 1 if prime, else 0
*/
int is_prime(unsigned long int  number)
{
	unsigned long int factor = 2;

	while (factor < number / factor)
	{
		if (number % factor == 0)
		{
			return (0);
		}
		factor += 1;
	}
	return (1);
}

/**
 * largest_prime_number - prints the largest
 * prime factor of the number 612852475143
 *
 * @number: number to print the largest prime factor of
 *
 * Return: the largest prime factor
*/
unsigned long int largest_prime_number(unsigned long int number)
{
	unsigned long int factor = 3;

	while (factor < number / factor)
	{
		if ((number % factor == 0) && (is_prime(number / factor)))
		{
			return (number / factor);
		}
		factor += 2;
	}
	return (0);
}

/**
 * main - main entry
 *
 * Return: always 0 as success
*/
int main(void)
{
	unsigned long int target_number = 612852475143;

	printf("%lu\n", largest_prime_number(target_number));
	return (0);
}
