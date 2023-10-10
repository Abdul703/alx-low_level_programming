#include <stdio.h>

/**
 * sumOfEvenFibonacci -  find sum of all even fibonacci
 *  that are below 4,000,000
 *
 * @first: first number
 * @second: second number
 *
 * Return: Always 0.
 */
long int sumOfEvenFibonacci(long int first, long int second)
{
	long int sum = 0, next;

	while (second <= 4000000)
	{
		if (second % 2 == 0)
			sum += second;

		next = first + second;
		first = second;
		second = next;
	}
	return (sum);
}

/**
 * main - entry point
 *
 * Return: always 0 for success
*/
int main(void)
{
	printf("%lu\n", sumOfEvenFibonacci(1, 2));
}
