#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of commandline arguments
 * @argv: Array of commandline arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n",argv[i]);
	}
	return (0);
}
