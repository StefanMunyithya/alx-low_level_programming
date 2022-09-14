#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers between n and 98 in order
 * @n: Starting number
 *
 * Return: Void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; ++i)
		{
			if (i == 98)
				printf("%d",i);
			else
				printf("%d, ",i);
		}
	}

	else
	{
		for (i = n; i >= 98; --i)
		{
			if (i == 98)
				printf("%d",i);
			else
				printf("%d, ",i);
		}
	}
	putchar('\n');
}
