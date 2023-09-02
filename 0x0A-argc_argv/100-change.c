#include <stdio.h>
#include <stdlib.h>

/**
 * getChange - prints the minimum number of coins to
 * make change for an amount of money.
 *
 * @cent: amount of money in cents
 *
 * Return: bumber of coins
 */
int getChange(int cent)
{
int count = 0, change = cent, i;
int coins[5] = {25, 10, 5, 2, 1};

for (i = 0; i < 5; i++)
{
	if (change == 0)
		break;

	count += change / coins[i];
	change %= coins[i];
}
return (count);
}

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 *
 * @argc: count arguments
 * @argv: string arguments
 *
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
int cents = atoi(argv[1]);

if (argc == 2)
{
	printf("%d\n", getChange(cents));
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
