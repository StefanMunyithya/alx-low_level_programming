#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initializes variable of type dog
 * @d: Variable
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
