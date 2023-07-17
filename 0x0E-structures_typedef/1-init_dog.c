#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: struct dog pointer
 * @name: dog name
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
