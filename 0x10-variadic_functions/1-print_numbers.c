#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers and separators between them
 * @separator: Separating string
 * @n: Count of arguments
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < (n - 1))
		{	
			if (separator == NULL)
				continue;
			else
				printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
