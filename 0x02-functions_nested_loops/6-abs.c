#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @n: Integer which absolute values is to be determined
 *
 * Return: absolute value of integer
 */
int _abs(int n)
{
	if (n < 1)
		return (n * -1);
	else
		return (n);
}
