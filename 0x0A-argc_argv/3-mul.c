#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of commandline arguments
 * @argv: Array of commandline arguments
 *
 * Return: 0 if successful
 * 1 if few arguments are passed
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));

	return (0);
}
