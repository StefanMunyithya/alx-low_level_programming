#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Returns 0 is executed well
 */
int main(void)
{
	char lower_current = 'a';
	char upper_current = 'A';

	while (lower_current <= 'z')
	{
		putchar(lower_current);
		++lower_current;
	}
	while (upper_current <= 'Z')
	{
		putchar(upper_current);
		++upper_current;
	}
	putchar('\n');
	return (0);
}
