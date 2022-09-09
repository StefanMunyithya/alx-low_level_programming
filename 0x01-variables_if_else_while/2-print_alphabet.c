#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Returns 0 when executed well
 */
int main(void)
{
	char current = 'a';

	while (current <= 'z')
	{
		putchar(current);
		++current;
	}

	putchar('\n');
}
