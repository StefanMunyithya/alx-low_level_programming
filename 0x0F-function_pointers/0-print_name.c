#include "function_pointer.h"
/**
 * print_name - Prints name
 * @name: String to be printed
 * @f: Function pointer
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
