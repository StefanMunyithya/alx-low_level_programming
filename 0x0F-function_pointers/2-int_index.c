#include "function_pointers.h"

/**
 * int_index - First element of which cmp does
 * not return 0
 * @array: Array of integers
 * @size: Size of the array
 * @cmp: Comparison function
 *
 * Return: 1 is success
 * -1 if fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);

	}
	return (-1);
}
