#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Returns 0 when executed well
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar('0' + num);
		++num;
	}
	putchar('\n');
	return (0);
}
