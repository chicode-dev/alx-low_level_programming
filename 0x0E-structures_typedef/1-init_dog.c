#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize dog struct
 * @d: struct
 * @name: name of dog
 * @age: age of dog
 * @owner: dogs owner
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
