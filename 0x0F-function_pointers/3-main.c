#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the calculator program.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);
	result = func(a, b);

	printf("%d\n", result);
	return (0);
}
