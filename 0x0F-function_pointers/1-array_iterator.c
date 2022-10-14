#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Function that executes different functions
 * @array: Array
 * @size: Size of array
 * @action: Function to be executed
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
