#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Returns 0 when executed well
 */
int main(void)
{
	char current;

	current = '0';
	while (current <= '9')
	{
		putchar(current);
		++current;
	}

	current = 'a';
	while (current <= 'f')
	{
		putchar(current);
		++current;
	}

	putchar('\n');
	return (0);
}
