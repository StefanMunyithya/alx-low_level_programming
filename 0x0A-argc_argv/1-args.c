#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of commandline arguments
 * @argv: Array containing commandline arguments
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
