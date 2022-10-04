#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to a two dimensional
 * array of integers initialized to zero.
 * @width: Number of columns
 * @height: Number of rows
 *
 * Return: Pointer to 2D array
 * NULL if fails
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);

	p = (int **)malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(p + i) = (int *)malloc(sizeof(int) * width);
		if (*(p + i) == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(*(p + j));
			}
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
