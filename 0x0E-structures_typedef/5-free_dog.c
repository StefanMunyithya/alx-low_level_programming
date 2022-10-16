#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees dynamically allocated memory
 * @d: Pointer to dog
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
