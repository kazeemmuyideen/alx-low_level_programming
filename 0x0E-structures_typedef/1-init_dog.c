#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function of dog
 *
 * @d: parameter
 * @name: Parameter
 * @age: Parameter
 * @owner: Parameter
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

