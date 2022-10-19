#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Performs various calculations 
 *
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int num1, num2, result;
       	char *op;
	
	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	
	result = get_op_func(op)(num1, num2);
	printf("%d\n",result);

	return (0);
}
