#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers passed in the CLI
 * @argc: Number of commandline arguments
 * @argv: Array of commandline arguments
 *
 * Return: 0 if successful
 * 1 if one of the arguments contains characters that are not digits
 */
int main(int argc, char *argv[])
{
	char *str;
	int i;
	int sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		str = argv[i];

		while (*str != '\0')
		{
			if ((*str < '0') || (*str > '9'))
			{
				printf("Error\n");
				return (1);
			}
			++str;
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
