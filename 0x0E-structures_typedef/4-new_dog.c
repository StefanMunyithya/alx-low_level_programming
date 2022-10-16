#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates new dog record
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: pointer to dog
 * NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->owner = owner;
	d->age = age;

	return (d);
}
