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
		
		if (num == 9)
		{
			++num;
			continue;
		}
		putchar(44);
		putchar(32);
		++num;
	}
	putchar('\n');
	return (0);
}
