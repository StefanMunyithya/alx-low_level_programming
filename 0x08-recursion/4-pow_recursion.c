/**
 * _pow_recursion - Returns x**y
 * @x: Base
 * @y: Index
 *
 * Return: x ** y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}
