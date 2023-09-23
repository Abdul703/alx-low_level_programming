#include <stdio.h>

/**
 * print_fibonacci - print fibonacci sequence starting from 1, 2, till the 50th
 *
 * @first: the starting number
 * @second: the second number
 * @count: initial count
 *
 * Return: void
*/
void print_fibonacci(long int first, long int second, int count)
{
	printf("%lu", first);
	if (count == 50)
	{
		printf("\n");
		return;
	}
	printf(", ");

	count++;
	print_fibonacci(second, first + second, count);
}

/**
 * main - main entry
 *
 * Return: always 0
*/
int main(void)
{
	print_fibonacci(1, 2, 0);
	return (0);
}
