#include "main.h"

int mult_less(unsigned long int n);
unsigned long int _pow(int a, int b);
/**
 * print_binary - Prints the binary representation of
 * a number.
 * @n: Number
 *
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	int power;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	power = mult_less(n);
	if (power == 0)
	{
		_putchar('1');
		return;
	}
	for (i = power; i >= 0; i--)
	{
		if (n >= _pow(2, i))
		{
			_putchar('1');
			n = n - _pow(2, i);
		}
		else
			_putchar('0');
	}

}

/**
 * mult_less - Returns power of largest multiple of two
 * less than ot equal to n
 * @n: Number to be converted to binary
 *
 * Return: Power
 */
int mult_less(unsigned long int n)
{
	int power;

	power = 0;
	while (_pow(2, power) < n)
	{
		power++;
	}
	if (_pow(2, power) == n)
		return (power);
	power--;
	return (power);
}
/**
 * _pow - Raises a to power b
 * @a: Number to be raised
 * @b: Index
 *
 * Return: a^b
 */
unsigned long int _pow(int a, int b)
{
	int index;
	int product;

	index = 1;
	product = a;
	if (a != 0 && b == 0)
		return (1);
	while (index < b)
	{
		product *= a;
		index++;
	}
	return (product);
}
