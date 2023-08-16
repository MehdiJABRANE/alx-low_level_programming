#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A C function that add variables to dog struct
 * @d: the struct
 * @name: the name
 * @age: the age
 * @owner: the owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
