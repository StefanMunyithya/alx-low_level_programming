#include "main.h"

/**
 * print_last_digit - Prints last digit of integer
 * @n: Integer which last digit is to be printed
 *
 * Return: Last digit of integer
 */
int print_last_digit(int n)
{
	int l_d;
	
	if (n >= 0)
		l_d = n % 10;
	else
		l_d = (n % 10) * -1;

	_putchar('0' + l_d);

	return (l_d);
}
