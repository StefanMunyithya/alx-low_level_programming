#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Prints dog record
 * @d: Pointer to struct dog
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(1);
	}
	printf("Name: ");
	if ((*d).name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Onwer: ");
	if ((*d).owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", (*d).owner);
}
