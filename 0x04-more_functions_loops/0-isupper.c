/**
 * _isupper - Checks if a character is an uppercase letter
 * @c: Integer to check
 *
 * Return: 1 is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (('A' <= c) && (c <= 'Z'))
		return (1);
	else
		return (0);

}
