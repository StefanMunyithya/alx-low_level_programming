/**
 * _strlen_recursion - Returns length of string using recursion
 * @s: Pointer to string
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
