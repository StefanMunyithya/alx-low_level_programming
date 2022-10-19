#include <stdarg.h>
/**
 * sum_them_all - Returns sum of arguments
 * @n: Count of arguments
 *
 * Return: Sum
 * 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int num;
	int sum;
	va_list ap;

	if (n == 0)
		return (0);
	sum = 0;
	num = 0;
	va_start(ap, n);

	while (num < n)
	{
		sum += va_arg(ap, int);
		++num;
	}
	va_end(ap);
	return (sum);
}
