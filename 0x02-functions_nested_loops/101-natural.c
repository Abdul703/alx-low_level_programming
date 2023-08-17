#include <stdio.h>

/**
 * print_sum_of_multiples - print sum of multiples of 3 and 5 below 1024
 *
 * Return: void
 */
void print_sum_of_multiples(void)
{
int sum = 0, num = 1;

while (num < 1024)
{
	if (num % 3 == 0 || num % 5 == 0)
	{
		sum += num;
	}
}
printf("%d\n", sum);
}
