#include "main.h"

/**
 * rev_string - reverse string using pointer
 *
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
char *start = s, *end = s, temp;

/* getting the last index */
while (*end != '\0')
{
	end++;
}
end--;

while (start < end)
{

	temp = *start;
	*start = *end;
	*end = temp;

	end--;
	start++;
}
}
