#include <stdio.h>
/**
 * print_diagsums - Prints sum of diagonals of square matrix
 * @a: 2D array of ints
 * @size: The number of rows/cols of the array
 *
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, row;

	sum1 = 0;
	sum2 = 0;
	for (row = 0; row < size; row++)
	{
		sum1 += *(a + row * size + row);
	}

	for (row = 0; row < size; row++)
	{
		sum2 += *(a + row * size + size - 1 - row);
	}
	printf("%d, %d\n", sum1, sum2);
}
