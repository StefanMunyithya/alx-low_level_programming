#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum number of coins
 * @argc: Number of commandline arguments
 * @argv: Array of commandline arguments
 *
 * Return: 0 if successful
 * 1 if error
 */
int main(int argc, char *argv[])
{
	int balance;
	int num_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	balance = atoi(argv[1]);
	num_coins = 0;

	if (balance < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins += balance / 25;
	balance = balance % 25;

	num_coins += balance / 10;
	balance = balance % 10;

	num_coins += balance / 5;
	balance = balance % 5;

	num_coins += balance / 2;
	balance = balance % 2;

	num_coins += balance / 1;

	printf("%d\n", num_coins);

	return (0);
}
