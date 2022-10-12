#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument string
 * Return: Final answer from operation
 */

int main(int argc, char *argv[])
{
	int a, b, answer;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	answer = f(a, b);
	printf("%d\n", answer);
	return (0);
}
