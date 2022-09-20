#include <stdio.h>
/**
 * print_array - Prints n elements of an array
 * @a: Array
 * @n: Number of elements to print
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);

		if (i < n - 1)
			printf(", ");
		++a;
	}
	printf("\n");
}
