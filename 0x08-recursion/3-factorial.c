/**
 * factorial - Returns the factorial of n
 * @n: Number whose factorial is to be calculated
 *
 * Return: Factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
