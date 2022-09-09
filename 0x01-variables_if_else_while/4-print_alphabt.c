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
		if ((current == 'q') || (current == 'e'))
		{
			++current;
			continue;
		}
		putchar(current);
		++current;
	}
	putchar('\n');
	return (0);
}
