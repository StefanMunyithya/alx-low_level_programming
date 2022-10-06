#include <stdlib.h>

/**
 * malloc_checked - Returns pointer to memory allocated using malloc
 * @b: Number of bytes
 *
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);

}
