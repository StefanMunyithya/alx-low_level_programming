#include <stdlib.h>

/**
 * array_range - Returns array containing min to max
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to int
 */
int *array_range(int min, int max)
{
	int num_elements;
	int *arr;
	int *nxt;
	int i;

	if (min > max)
		return (NULL);
	num_elements = max - min + 1;
	arr = malloc(num_elements * sizeof(int));

	if (arr == NULL)
		return (NULL);
	nxt = arr;
	for (i = min; i <= max; i++, nxt++)
	{
		*nxt = i;
	}
	return (arr);

}
