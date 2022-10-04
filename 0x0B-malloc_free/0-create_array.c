#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates array of characters of size size
 * @size: Size of array
 * @c: Initialization value
 *
 * Return: Pointer to array if successful
 * NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *)malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}

	return (p);


}

