#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - A C function that add variables to dog struct
 * @d: the struct
*/
void print_dog(struct dog *d)
{
	if (d && d->name && d->age && d->owner)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
