#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable
 * @d: The dog
 * @name: The name of the dog
 * @age: The ae of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
