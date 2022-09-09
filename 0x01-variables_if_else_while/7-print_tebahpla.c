#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Returns 0 when executed well
 */
int main(void)
{
	char current;

	current = 'z';
	while (current >= 'a')
	{
		putchar(current);
		--current;
	}
	putchar('\n');
	return (0);
}
