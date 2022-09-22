/**
 * string_toupper - Changes lower to upper
 * @p: String to convert to uppercase
 *
 * Return: Pointer to string
 */
char *string_toupper(char *p)
{
	char *str;

	str = p;
	while (*str != '\0')
	{
		if ('a' <= *str && *str <= 'z')
		{
			*str = 'A' + (*str - 'a');
		}
		++str;
	}
	return (p);
}
