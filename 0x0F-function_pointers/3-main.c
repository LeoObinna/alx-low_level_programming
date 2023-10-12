#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations as required in the task
 * @argc: This should be the number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int can1, can2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	can1 = atoi(argv[1]);
	op = argv[2];
	can2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && can2 == 0) ||
	    (*op == '%' && can2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(can1, can2));

	return (0);
}
