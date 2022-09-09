#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Returns 0 when executed well
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and ", n, (n % 10));

	if ((n % 10) > 5)
		printf("is greater than 5\n");
	else if ((n % 10) == 0)
		printf("is 0\n");
	else if ((n % 10) < 6)
		printf("is less than 6 and not 0\n");
	else
		printf("\n");
	return (0);
}
