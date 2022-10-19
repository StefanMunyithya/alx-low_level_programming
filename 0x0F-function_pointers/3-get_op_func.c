#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Gets the appropriate function based on
 * the provided operator.
 * @s: Operator
 *
 * Return: Pointer to the appropriate function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
		     };
	int i;

	i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		++i;
	}
	printf("Error\n");
	exit(99);

}
