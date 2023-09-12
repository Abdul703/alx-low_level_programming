#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - prints the struct dog
 *
 * @d: the dog pointer
 *
 * Return: void
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		if (d->age >= 0)
			printf("Age: %.1f\n", d->age);
		else
			printf("Age: (nil)\n");
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
