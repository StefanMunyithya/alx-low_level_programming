#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array of integers
 * @n: length of array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int *start;
	int *end;
	int swaps;
	int i;
	int tmp;

	if (n < 2)
		return;

	start = a;
	end = start + n - 1;
	swaps = n / 2;


	for (i = 0; i < swaps; i++)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		++start;
		--end;
	}
}
