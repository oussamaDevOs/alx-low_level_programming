#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	d->name = "Poppy";
	d->age = atof("3.5");
	d->owner = "Bob";
}
