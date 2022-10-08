#include <stdlib.h>

/**
 * _calloc - The _calloc function allocates memory for
 * an array of nmemb elements of size bytes each and
 * returns a pointer to the allocated memory.
 * @nmemb: Number of elements
 * @size: Number of bytes of eache element
 *
 * Return: Void pointer
 * NULL if error
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int prod;
	unsigned int i;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	prod = nmemb * size;
	if ((prod / nmemb) != size)
		return (NULL);
	p = malloc(prod);
	if (p == NULL)
		return (NULL);

	return (p);


}
