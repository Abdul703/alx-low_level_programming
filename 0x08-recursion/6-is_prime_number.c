#include "main.h"

/**
 * is_prime - check if number is prime
 *
 * @n: an integer to check
 * @d: the divisor
 *
 * Return: 0 if is prime, else, 1
*/
int is_prime(int n, int d)
{
if (d == 1)
	return (1);
else if (n % d == 0)
	return (0);
return (is_prime(n, (d - 1)));
}

/**
 * is_prime_number - call function that check if number is prime
 *
 * @n: an integer to check
 *
 * Return: 0 if is prime, else, 1
*/
int is_prime_number(int n)
{
if (n <= 1)
	return (0);
return (is_prime(n, n - 1));
}
