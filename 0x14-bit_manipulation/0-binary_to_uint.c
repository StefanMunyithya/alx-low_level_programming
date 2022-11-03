#include "main.h"

unsigned long int _pow(int a, int b);
/**
 * binary_to_uint - Connverts binary to int
 * @b: Pointer to character string
 *
 * Return: Decimal value
 * 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int pow;
	int pos;

	if (b == NULL)
		return (0);
	pow = 0;
	num = 0;
	pos = 0;

	while (*(b + pos) != '\0')
		pos++;
	pos--;
	while (pos >= 0)
	{
		if (*(b + pos) != '0' && *(b + pos) != '1')
			return (0);
		if (*(b + pos) == '1')
		{
			num += _pow(2, pow);
		}
		pos--;
		pow++;

	}
	return (num);

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
