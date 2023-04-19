#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize the previous function
 * @d: dog structure
 * @name: dog name
 * @age: duh
 * @owner: the one who let the dogs out
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
