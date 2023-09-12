#include "dog.h"

/**
 * init_dog - initialize dog struct
 *
 * @d: pointer to the dog object
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
